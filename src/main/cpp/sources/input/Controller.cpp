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

#include "../../include/openaperengine/input/Controller.h"

namespace oae
{
    Controller::Controller(int id) : joystick(id)
    {
    }

    int Controller::getId() const
    {
        return joystick;
    }

    std::string Controller::getName()
    {
        const char *name = glfwGetJoystickName(joystick);
        if (name == NULL)
            return "NULL";
        return std::string(name);
    }

    bool Controller::isConnected()
    {
        return glfwJoystickPresent(joystick) == 1;
    }
}
