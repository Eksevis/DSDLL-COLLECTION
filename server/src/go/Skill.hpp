/*
 *  This file is part of dsmmorpg.
 *
 *  dsmmorpg is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  dsmmorpg is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with dsmmorpg.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SKILL_HPP_
#define SKILL_HPP_

    #include "../platform.hpp"

    #include <map>
    using std::map;

    struct Skill
    {
        string name;
        float level;
        u_int64_t experience;
    };

#endif /* SKILL_HPP_ */