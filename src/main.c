/*
  Copyright: (c) 2019, Guilherme Francescon Cittolin <gfcittolin@gmail.com>
  GNU General Public License v3.0+ (see LICENSE or https://www.gnu.org/licenses/gpl-3.0.txt)
*/

#include "common.h"
#include "discovery.h"

    static void
    print_usage(const char *progname)
{
    fprintf(stderr, "pntools %s\n", PNT_VERSION);
    fprintf(stderr, "usage: %s <command> [options]\n\n", progname);
    fprintf(stderr, "Available commands:\n");
    fprintf(stderr, "   discovery    List all reachable devices on the network\n");
    fprintf(stderr, "   flashled     Identifies a device by flashing all its leds\n");
}

int main(int argc, char **argv)
{
    if (argc < 2) {
        print_usage(argv[0]);
        return EXIT_FAILURE;
    }

    //sleep(10);

    if (strcmp(argv[1], "discovery") == 0) {
        return pnt_discovery(argc, argv);
    } else if (strcmp(argv[1], "flashled") == 0) {
        fprintf(stderr, "not yet implemented\n");
        return EXIT_FAILURE;
    } else {
        print_usage(argv[0]);
        return EXIT_FAILURE;
    }
}