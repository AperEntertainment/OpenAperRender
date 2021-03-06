/*
 * Copyright © 2016 Clément "w67clement" Wagner
 *
 * This file is part of OpenAperEngine.
 *
 * OpenAperEngine is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenAperEngine is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with OpenAperEngine.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <string>
#include <stdexcept>
#include "../../include/openaperengine/window/OpenCursor.h"

namespace oae
{
    OpenCursor::OpenCursor(GLFWcursor *cursor) : cursor(cursor)
    {
    }

    GLFWcursor *OpenCursor::getCursorPointer()
    {
        return cursor;
    }

    OpenCursor createStandardCursor(unsigned int shape)
    {
        GLFWcursor *cursor = glfwCreateStandardCursor(shape);
        if (cursor == nullptr)
            throw std::runtime_error("Cannot create the standard cursor with shape: " + std::to_string(shape));
        return OpenCursor(cursor);
    }
}
