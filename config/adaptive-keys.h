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
 * The keymap must use &ak_A or &as_A instead of &kp A etc.
 */
        ak_A: ak_A {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp A>;
            akA_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(A)>; strict-modifiers; };
        };
        as_A: auto_shift_A {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(A)>, <&ak_A>;
        };

        ak_B: ak_B {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp B>;
            akB_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(B)>; strict-modifiers; };
        };
        as_B: auto_shift_B {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(B)>, <&ak_B>;
        };

        ak_C: ak_C {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp C>;
            akC_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(C)>; strict-modifiers; };
        };
        as_C: auto_shift_C {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(C)>, <&ak_C>;
        };

        ak_D: ak_D {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp D>;
            akD_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(D)>; strict-modifiers; };
        };
        as_D: auto_shift_D {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(D)>, <&ak_D>;
        };

        ak_E: ak_E {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp E>;
            akE_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(E)>; strict-modifiers; };
        };
        as_E: auto_shift_E {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(E)>, <&ak_E>;
        };

        ak_F: ak_F {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp F>;
            akF_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(F)>; strict-modifiers; };
        };
        as_F: auto_shift_F {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(F)>, <&ak_F>;
        };

        ak_G: ak_G {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp G>;
            akG_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(G)>; strict-modifiers; };
        };
        as_G: auto_shift_G {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(G)>, <&ak_G>;
        };

        ak_H: ak_H {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp H>;
            akH_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(H)>; strict-modifiers; };
        };
        as_H: auto_shift_H {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(H)>, <&ak_H>;
        };

        ak_I: ak_I {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp I>;
            akI_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(I)>; strict-modifiers; };
        };
        as_I: auto_shift_I {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(I)>, <&ak_I>;
        };

        ak_J: ak_J {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp J>;
            akJ_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(J)>; strict-modifiers; };
        };
        as_J: auto_shift_J {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(J)>, <&ak_J>;
        };

        ak_K: ak_K {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp K>;
            akK_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(K)>; strict-modifiers; };
        };
        as_K: auto_shift_K {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(K)>, <&ak_K>;
        };

        ak_L: ak_L {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp L>;
            akL_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(L)>; strict-modifiers; };
        };
        as_L: auto_shift_L {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(L)>, <&ak_L>;
        };

        ak_M: ak_M {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp M>;
            akM_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(M)>; strict-modifiers; };
        };
        as_M: auto_shift_M {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(M)>, <&ak_M>;
        };

        ak_N: ak_N {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp N>;
            akN_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(N)>; strict-modifiers; };
        };
        as_N: auto_shift_N {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(N)>, <&ak_N>;
        };

        ak_O: ak_O {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp O>;
            akO_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(O)>; strict-modifiers; };
        };
        as_O: auto_shift_O {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(O)>, <&ak_O>;
        };

        ak_P: ak_P {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp P>;
            akP_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(P)>; strict-modifiers; };
        };
        as_P: auto_shift_P {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(P)>, <&ak_P>;
        };

        ak_Q: ak_Q {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp Q>;
            akQ_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(Q)>; strict-modifiers; };
        };
        as_Q: auto_shift_Q {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(Q)>, <&ak_Q>;
        };

        ak_R: ak_R {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp R>;
            akR_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(R)>; strict-modifiers; };
        };
        as_R: auto_shift_R {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(R)>, <&ak_R>;
        };

        ak_S: ak_S {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp S>;
            akS_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(S)>; strict-modifiers; };
        };
        as_S: auto_shift_S {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(S)>, <&ak_S>;
        };

        ak_T: ak_T {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp T>;
            akT_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(T)>; strict-modifiers; };
        };
        as_T: auto_shift_T {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(T)>, <&ak_T>;
        };

        ak_U: ak_U {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp U>;
            akU_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(U)>; strict-modifiers; };
        };
        as_U: auto_shift_U {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(U)>, <&ak_U>;
        };

        ak_V: ak_V {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp V>;
            akV_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(V)>; strict-modifiers; };
        };
        as_V: auto_shift_V {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(V)>, <&ak_V>;
        };

        ak_W: ak_W {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp W>;
            akW_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(W)>; strict-modifiers; };
        };
        as_W: auto_shift_W {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(W)>, <&ak_W>;
        };

        ak_X: ak_X {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp X>;
            akX_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(X)>; strict-modifiers; };
        };
        as_X: auto_shift_X {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(X)>, <&ak_X>;
        };

        ak_Y: ak_Y {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp Y>;
            akY_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(Y)>; strict-modifiers; };
        };
        as_Y: auto_shift_Y {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(Y)>, <&ak_Y>;
        };

        ak_Z: ak_Z {
            compatible = "zmk,behavior-adaptive-key";
            #binding-cells = <0>;
            bindings = <&kp Z>;
            akZ_Cap { trigger-keys = <CMMA>; max-prior-idle-ms = <my_cc_term>; bindings = <&kp BSPC &kp LS(Z)>; strict-modifiers; };
        };
        as_Z: auto_shift_Z {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <0>;
            tapping_term_ms = <my_linger_term>;
            quick_tap_ms = <250>;
            flavor = "tap-preferred";
            bindings = <&kp LS(Z)>, <&ak_Z>;
        };

