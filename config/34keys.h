#define XXX &none
#define ___ &trans

#define BASE 0
#define NAV (1)
#define SYM (2)
#define NUM (3)
#define FUN (4)
#define SYS (5)

#define STICKY_KEYS_TIMEOUT 3000

#define MEH(x) LC(LS(LA((x))))
#define HYPR(x) LC(LS(LA(LG(x))))
#define M1(x) MEH((x))
#define M2(x) HYPR((x))
#define MOD1 LC(LS(LALT))
#define MOD2 LC(LS(LA(LGUI)))

#define OSX_MCL LC(UP)
#define OSX_SS LG(LS(LC(N4)))

// Browser controls
// new browser tab
#define N_NEBW LC(T)
// old browser tab
#define N_OLBW LC(LS(T))
// next browser
#define N_NBWS LC(TAB)
// prev browser
#define N_PBWS LC(LS(TAB))
// close browser
#define N_CLBW LC(W)

#define TIMEOUT_QUICK 40
#define TIMEOUT_DEFAULT 50
