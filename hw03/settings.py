"""
This file is part of imdb-data-parser.

imdb-data-parser is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

imdb-data-parser is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with imdb-data-parser.  If not, see <http://www.gnu.org/licenses/>.
"""

INPUT_DIR = "/path/to/lists/files/"
OUTPUT_DIR = "/path/to/tsv/outputs/"

INTERFACES_SERVER = "ftp.fu-berlin.de"
INTERFACES_DIRECTORY = "pub/misc/movies/database/"
#alternative servers:
#ftp://ftp.funet.fi/pub/mirrors/ftp.imdb.com/pub/
#ftp://ftp.sunet.se/pub/tv+movies/imdb/

LISTS = [
    "directors",
    "genres",
    "movies",
    "plot",
    "actors", 
    "actresses",
    "aka-names",
    "aka-titles",
    "ratings"
]