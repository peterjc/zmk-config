/*
 * AdaptiveKey behaviors (send a different behavior based on prior key),
 * and in particular "Comma Magic" aka "Comma Shift" by @phbonachi on Reddit.
 * See https://github.com/moutis/zmk-config
 *
 * Commma almost never preceeds a letter (usually followed by space, or a number).
 * Treat comma then letter as meaning capital letter (sends backspace then shifted
 * letter) using urob's behavior-adaptive-key module https://github.com/urob/zmk-adaptive-key/
 *
 * This is overly verbose, but allows additonal "Adaptive Keys" to be defined too.
 * (It is tempting to define the capital only ones with a macro...)
 *
 * The keymap must use &ak_A instead of &kp A etc.
 */
        ak_A: ak_A {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp A>;

            akA_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(A)>; };
        };
        ak_B: ak_B {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp B>;

            akB_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(B)>; };
        };
        ak_C: ak_C {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp C>;

            akC_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(C)>; };
        };
        ak_D: ak_D {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp D>;

            akD_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(D)>; };
        };
        ak_E: ak_E {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp E>;

            akE_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(E)>; };
        };
        ak_F: ak_F {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp F>;

            akF_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(F)>; };
            // akF_t_v { trigger-keys = <D>; max-prior-idle-ms = <my_ak_term>; bindings = <&kp V>; };
        };
        ak_G: ak_G {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp G>;

            akG_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(G)>; };
        };
        ak_H: ak_H {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp H>;

            akH_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(H)>; };
        };
        ak_I: ak_I {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp I>;

            akI_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(I)>; };
        };
        ak_J: ak_J {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp J>;

            akJ_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(J)>; };
        };
        ak_K: ak_K {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp K>;

            akK_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(K)>; };
        };
        ak_L: ak_L {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp L>;

            akL_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(L)>; };
        };
        ak_M: ak_M {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp M>;

            akM_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(M)>; };
        };
        ak_N: ak_N {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp N>;

            akN_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(N)>; };
            // akN_t_ion { trigger-keys = <T>; max-prior-idle-ms = <my_ak_term>; bindings = <&kp I &kp O &kp N>; };
        };
        ak_O: ak_O {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp O>;

            akO_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(O)>; };
        };
        ak_P: ak_P {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp P>;

            akP_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(P)>; };
        };
        ak_Q: ak_Q {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp Q>;

            akQ_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(Q)>; };
        };
        ak_R: ak_R {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp R>;

            akR_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(R)>; };
        };
        ak_S: ak_S {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp S>;

            akS_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(S)>; };
        };
        ak_T: ak_T {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp T>;

            akT_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(T)>; };
        };
        ak_U: ak_U {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp U>;

            akU_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(U)>; };
        };
        ak_V: ak_V {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp V>;

            akV_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(V)>; };
        };
        ak_W: ak_W {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp W>;

            akW_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(W)>; };
        };
        ak_X: ak_X {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp X>;

            akX_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(X)>; };
        };
        ak_Y: ak_Y {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp Y>;

            akY_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(Y)>; };
        };
        ak_Z: ak_Z {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp Z>;

            akZ_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(Z)>; };
        };

/*
        ak_CMMA: ak_CMMA { // double-tap comma = caps_word
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp CMMA>;
            ak_CMMA_cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &caps_word>; };
        };
*/
