#pragma once

/*
 *  Copyright(c) 2015 Jeremiah van Oosten
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files(the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions :
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 *  IN THE SOFTWARE.
 */

/**
 *  @file SpotLight.h
 *  @date April 27, 2016
 *  @author Jeremiah
 *
 *  @brief Directional light structure.
 */

#include "../EngineDefines.h"

namespace Graphics
{
    struct alignas( 16 ) DirectionalLight
    {
        /**
         * Direction of the light in world space.
         */
        glm::vec4 m_DirectionWS;
        //--------------------------------------------------------------( 16 bytes )

        /**
         * Direction of the light in view space.
         */
        glm::vec4 m_DirectionVS;
        //--------------------------------------------------------------( 16 bytes )

        /**
         * Color of the light.
         */
        glm::vec3 m_Color;

        /**
         * Intensity of the light.
         */
        float m_Intensity;
        //--------------------------------------------------------------( 16 bytes )

        /**
         * If the light is enabled or not.
         */
        uint32_t m_Enabled;

        /**
         * If the light is selected or not.
         */
        uint32_t m_Selected;

        glm::vec2 m_Padding;
        //--------------------------------------------------------------( 16 bytes )
        //--------------------------------------------------------------( 16 * 4 = 64 bytes )

        DirectionalLight()
            : m_DirectionWS( 0, 0, 1, 0 )
            , m_DirectionVS( 0, 0, -1, 0 )
            , m_Color( 1, 1, 1 )
            , m_Intensity( 1.0f )
            , m_Enabled( 1 )
            , m_Selected( 0 )
        {}
    };
}
