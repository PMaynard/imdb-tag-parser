IMDB Tag Parser
===============
Takes IMDB tag lines and parses them.

Still in development, so all it does is print the movie name and any tag lines.

Download the IMDB tag list from http://www.imdb.com/interfaces (ftp://ftp.fu-berlin.de/pub/misc/movies/database/taglines.list.gz)

### Complie
Simply use the Makefile. 

### Usage
Run the program with a filename, which contains the taglines, e.g.

    ./imdb-tags tagsExample

A tagline is a short description or comment on a movie that is 
displayed on movie posters (or direct to video covers etc) to capture
the essence of the movie, and ultimetely make you watch the movie.

Examples...

    Jaws (1975) 
         She was the first 
    Aliens (1986) 
         This time it's war 
    Outbreak (1995) 
         Try to remain calm 

Formatting submissions: The basic syntax is..

    # title
        tagline

An exapmle...

    # Jaws (1975)
        She was the first

A TAB is used to mark a separate tagline, so if a movie has say
2 taglines on the original poster or direct to video blurb, they can
both be added, e.g.

    # Above the Rim (1994)
        The hardest part of winning is choosing sides.
        Some games you play.  Some games play you.

