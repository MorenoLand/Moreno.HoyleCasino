; FUN_005c2420  005c2420
005c2420  PUSH EBP
005c2421  MOV EBP,ESP
005c2423  PUSH -0x1
005c2425  PUSH 0x6a8628
005c242a  MOV EAX,FS:[0x0]
005c2430  PUSH EAX
005c2431  SUB ESP,0xdc
005c2437  MOV EAX,[0x00781870]
005c243c  XOR EAX,EBP
005c243e  PUSH EAX
005c243f  LEA EAX,[EBP + -0xc]
005c2442  MOV FS:[0x0],EAX
005c2448  MOV dword ptr [EBP + 0xffffff48],ECX
005c244e  MOV EAX,dword ptr [EBP + 0xffffff48]
005c2454  MOV ECX,dword ptr [0x0162ee84]
005c245a  MOV EDX,dword ptr [ECX + 0x14]
005c245d  MOV dword ptr [EAX + 0x8],EDX
005c2460  MOV EAX,dword ptr [EBP + 0xffffff48]
005c2466  CMP dword ptr [EAX + 0x4],0x0
005c246a  JZ 0x005c24a4
005c246c  MOV ECX,dword ptr [EBP + 0xffffff48]
005c2472  MOV EDX,dword ptr [ECX + 0x4]
005c2475  MOV dword ptr [EBP + -0x24],EDX
005c2478  MOV EAX,dword ptr [EBP + -0x24]
005c247b  MOV dword ptr [EBP + -0x20],EAX
005c247e  CMP dword ptr [EBP + -0x20],0x0
005c2482  JZ 0x005c249a
005c2484  PUSH 0x1
005c2486  MOV ECX,dword ptr [EBP + -0x20]
005c2489  MOV EDX,dword ptr [ECX]
005c248b  MOV ECX,dword ptr [EBP + -0x20]
005c248e  MOV EAX,dword ptr [EDX]
005c2490  CALL EAX
005c2492  MOV dword ptr [EBP + 0xffffff44],EAX
005c2498  JMP 0x005c24a4
005c249a  MOV dword ptr [EBP + 0xffffff44],0x0
005c24a4  PUSH 0xe8
005c24a9  CALL 0x00686d82
005c24ae  ADD ESP,0x4
005c24b1  MOV dword ptr [EBP + -0x2c],EAX
005c24b4  MOV dword ptr [EBP + -0x4],0x0
005c24bb  CMP dword ptr [EBP + -0x2c],0x0
005c24bf  JZ 0x005c24d1
005c24c1  MOV ECX,dword ptr [EBP + -0x2c]
005c24c4  CALL 0x005c8bb0
005c24c9  MOV dword ptr [EBP + 0xffffff40],EAX
005c24cf  JMP 0x005c24db
005c24d1  MOV dword ptr [EBP + 0xffffff40],0x0
005c24db  MOV ECX,dword ptr [EBP + 0xffffff40]
005c24e1  MOV dword ptr [EBP + -0x28],ECX
005c24e4  MOV dword ptr [EBP + -0x4],0xffffffff
005c24eb  MOV EDX,dword ptr [EBP + 0xffffff48]
005c24f1  MOV EAX,dword ptr [EBP + -0x28]
005c24f4  MOV dword ptr [EDX + 0x4],EAX
005c24f7  MOV ECX,dword ptr [EBP + 0x8]
005c24fa  PUSH ECX
005c24fb  MOV EDX,dword ptr [EBP + 0xffffff48]
005c2501  MOV ECX,dword ptr [EDX + 0x4]
005c2504  CALL 0x005c8c60
005c2509  PUSH 0x6d1c4c
005c250e  CALL 0x00630f40
005c2513  ADD ESP,0x4
005c2516  PUSH EAX
005c2517  MOV ECX,dword ptr [0x0162ee84]
005c251d  CALL 0x005f38b0
005c2522  MOV EAX,dword ptr [EBP + 0xffffff48]
005c2528  MOV ECX,dword ptr [EAX + 0x50]
005c252b  MOV DL,byte ptr [ECX + 0x6]
005c252e  PUSH EDX
005c252f  MOV EAX,dword ptr [EBP + 0xffffff48]
005c2535  MOV ECX,dword ptr [EAX + 0x50]
005c2538  MOV DL,byte ptr [ECX + 0x5]
005c253b  PUSH EDX
005c253c  MOV EAX,dword ptr [EBP + 0xffffff48]
005c2542  MOV ECX,dword ptr [EAX + 0x50]
005c2545  MOV DL,byte ptr [ECX + 0x4]
005c2548  PUSH EDX
005c2549  MOV ECX,dword ptr [0x0162ee80]
005c254f  CALL 0x005f1b10
005c2554  MOV EAX,dword ptr [EBP + 0xffffff48]
005c255a  MOV ECX,dword ptr [EAX + 0x50]
005c255d  MOV EDX,dword ptr [EBP + 0xffffff48]
005c2563  MOV EAX,dword ptr [ECX + 0x108]
005c2569  MOV dword ptr [EDX + 0xc],EAX
005c256c  MOV ECX,dword ptr [EBP + 0xffffff48]
005c2572  MOV EDX,dword ptr [ECX + 0x4]
005c2575  MOV EAX,dword ptr [EDX + 0x10]
005c2578  MOV ECX,dword ptr [EAX]
005c257a  MOV dword ptr [EBP + -0x48],ECX
005c257d  SUB ESP,0x34
005c2580  MOV ECX,ESP
005c2582  MOV dword ptr [EBP + -0x4c],ESP
005c2585  CALL 0x005c3870
005c258a  MOV dword ptr [EBP + 0xffffff3c],EAX
005c2590  MOV EDX,dword ptr [EBP + -0x48]
005c2593  PUSH EDX
005c2594  MOV ECX,dword ptr [EBP + 0xffffff48]
005c259a  ADD ECX,0x58
005c259d  CALL 0x005c4ba0
005c25a2  MOV dword ptr [EBP + -0x10],0x0
005c25a9  JMP 0x005c25b4
005c25ab  MOV EAX,dword ptr [EBP + -0x10]
005c25ae  ADD EAX,0x1
005c25b1  MOV dword ptr [EBP + -0x10],EAX
005c25b4  MOV ECX,dword ptr [EBP + 0xffffff48]
005c25ba  MOV EDX,dword ptr [ECX + 0x4]
005c25bd  MOV EAX,dword ptr [EDX + 0x10]
005c25c0  MOV ECX,dword ptr [EAX]
005c25c2  MOV dword ptr [EBP + -0x50],ECX
005c25c5  MOV EDX,dword ptr [EBP + -0x10]
005c25c8  CMP EDX,dword ptr [EBP + -0x50]
005c25cb  JGE 0x005c2932
005c25d1  MOV EAX,dword ptr [EBP + 0xffffff48]
005c25d7  ADD EAX,0x58
005c25da  MOV dword ptr [EBP + -0x54],EAX
005c25dd  MOV ECX,dword ptr [EBP + -0x54]
005c25e0  CMP dword ptr [ECX + 0x4],0x0
005c25e4  JNZ 0x005c25f2
005c25e6  MOV dword ptr [EBP + 0xffffff38],0x0
005c25f0  JMP 0x005c260e
005c25f2  MOV EDX,dword ptr [EBP + -0x54]
005c25f5  MOV EAX,dword ptr [EBP + -0x54]
005c25f8  MOV ECX,dword ptr [EDX + 0x8]
005c25fb  SUB ECX,dword ptr [EAX + 0x4]
005c25fe  MOV EAX,ECX
005c2600  CDQ
005c2601  MOV ECX,0x34
005c2606  IDIV ECX
005c2608  MOV dword ptr [EBP + 0xffffff38],EAX
005c260e  MOV EDX,dword ptr [EBP + -0x10]
005c2611  CMP EDX,dword ptr [EBP + 0xffffff38]
005c2617  JC 0x005c261f
005c2619  CALL dword ptr [0x006b2274]
005c261f  MOV EAX,dword ptr [EBP + -0x10]
005c2622  IMUL EAX,EAX,0x34
005c2625  MOV ECX,dword ptr [EBP + -0x54]
005c2628  MOV EDX,dword ptr [ECX + 0x4]
005c262b  MOV ECX,dword ptr [EBP + 0xffffff48]
005c2631  MOV dword ptr [EAX + EDX*0x1],ECX
005c2634  MOV EDX,dword ptr [EBP + 0xffffff48]
005c263a  ADD EDX,0x58
005c263d  MOV dword ptr [EBP + -0x58],EDX
005c2640  MOV EAX,dword ptr [EBP + -0x58]
005c2643  CMP dword ptr [EAX + 0x4],0x0
005c2647  JNZ 0x005c2655
005c2649  MOV dword ptr [EBP + 0xffffff34],0x0
005c2653  JMP 0x005c266f
005c2655  MOV ECX,dword ptr [EBP + -0x58]
005c2658  MOV EDX,dword ptr [EBP + -0x58]
005c265b  MOV EAX,dword ptr [ECX + 0x8]
005c265e  SUB EAX,dword ptr [EDX + 0x4]
005c2661  CDQ
005c2662  MOV ECX,0x34
005c2667  IDIV ECX
005c2669  MOV dword ptr [EBP + 0xffffff34],EAX
005c266f  MOV EDX,dword ptr [EBP + -0x10]
005c2672  CMP EDX,dword ptr [EBP + 0xffffff34]
005c2678  JC 0x005c2680
005c267a  CALL dword ptr [0x006b2274]
005c2680  MOV EAX,dword ptr [EBP + -0x10]
005c2683  IMUL EAX,EAX,0x34
005c2686  MOV ECX,dword ptr [EBP + -0x58]
005c2689  MOV EDX,dword ptr [ECX + 0x4]
005c268c  MOV ECX,dword ptr [EBP + -0x10]
005c268f  MOV dword ptr [EDX + EAX*0x1 + 0x4],ECX
005c2693  MOV EDX,dword ptr [EBP + 0xffffff48]
005c2699  MOV EAX,dword ptr [EDX + 0x4]
005c269c  MOV ECX,dword ptr [EAX + 0x10]
005c269f  MOV EDX,dword ptr [ECX + 0x4]
005c26a2  MOV dword ptr [EBP + -0x5c],EDX
005c26a5  MOV EAX,dword ptr [EBP + 0xffffff48]
005c26ab  ADD EAX,0x58
005c26ae  MOV dword ptr [EBP + -0x60],EAX
005c26b1  MOV ECX,dword ptr [EBP + -0x60]
005c26b4  CMP dword ptr [ECX + 0x4],0x0
005c26b8  JNZ 0x005c26c6
005c26ba  MOV dword ptr [EBP + 0xffffff30],0x0
005c26c4  JMP 0x005c26e2
005c26c6  MOV EDX,dword ptr [EBP + -0x60]
005c26c9  MOV EAX,dword ptr [EBP + -0x60]
005c26cc  MOV ECX,dword ptr [EDX + 0x8]
005c26cf  SUB ECX,dword ptr [EAX + 0x4]
005c26d2  MOV EAX,ECX
005c26d4  CDQ
005c26d5  MOV ECX,0x34
005c26da  IDIV ECX
005c26dc  MOV dword ptr [EBP + 0xffffff30],EAX
005c26e2  MOV EDX,dword ptr [EBP + -0x10]
005c26e5  CMP EDX,dword ptr [EBP + 0xffffff30]
005c26eb  JC 0x005c26f3
005c26ed  CALL dword ptr [0x006b2274]
005c26f3  MOV EAX,dword ptr [EBP + -0x10]
005c26f6  IMUL EAX,EAX,0x34
005c26f9  MOV ECX,dword ptr [EBP + -0x60]
005c26fc  MOV EDX,dword ptr [ECX + 0x4]
005c26ff  LEA EAX,[EDX + EAX*0x1 + 0x20]
005c2703  MOV dword ptr [EBP + 0xffffff60],EAX
005c2709  PUSH 0x0
005c270b  MOV ECX,dword ptr [EBP + -0x5c]
005c270e  ADD ECX,0x1
005c2711  PUSH ECX
005c2712  MOV ECX,dword ptr [EBP + 0xffffff60]
005c2718  CALL 0x005be4d0
005c271d  MOV EDX,dword ptr [EBP + 0xffffff48]
005c2723  MOV EAX,dword ptr [EDX + 0x4]
005c2726  MOV dword ptr [EBP + 0xffffff5c],EAX
005c272c  MOV ECX,dword ptr [EBP + -0x10]
005c272f  MOV EDX,dword ptr [EBP + 0xffffff5c]
005c2735  CMP dword ptr [EDX + ECX*0x4 + 0x18],0x0
005c273a  JL 0x005c2751
005c273c  MOV EAX,dword ptr [EBP + -0x10]
005c273f  MOV ECX,dword ptr [EBP + 0xffffff5c]
005c2745  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
005c2749  MOV dword ptr [EBP + 0xffffff2c],EDX
005c274f  JMP 0x005c2766
005c2751  MOV EAX,dword ptr [EBP + -0x10]
005c2754  MOV ECX,dword ptr [EBP + 0xffffff5c]
005c275a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
005c275e  NEG EDX
005c2760  MOV dword ptr [EBP + 0xffffff2c],EDX
005c2766  MOV EAX,dword ptr [EBP + 0xffffff48]
005c276c  ADD EAX,0x58
005c276f  MOV dword ptr [EBP + 0xffffff58],EAX
005c2775  MOV ECX,dword ptr [EBP + 0xffffff58]
005c277b  CMP dword ptr [ECX + 0x4],0x0
005c277f  JNZ 0x005c278d
005c2781  MOV dword ptr [EBP + 0xffffff28],0x0
005c278b  JMP 0x005c27af
005c278d  MOV EDX,dword ptr [EBP + 0xffffff58]
005c2793  MOV EAX,dword ptr [EBP + 0xffffff58]
005c2799  MOV ECX,dword ptr [EDX + 0x8]
005c279c  SUB ECX,dword ptr [EAX + 0x4]
005c279f  MOV EAX,ECX
005c27a1  CDQ
005c27a2  MOV ECX,0x34
005c27a7  IDIV ECX
005c27a9  MOV dword ptr [EBP + 0xffffff28],EAX
005c27af  MOV EDX,dword ptr [EBP + -0x10]
005c27b2  CMP EDX,dword ptr [EBP + 0xffffff28]
005c27b8  JC 0x005c27c0
005c27ba  CALL dword ptr [0x006b2274]
005c27c0  FILD dword ptr [EBP + 0xffffff2c]
005c27c6  MOV EAX,dword ptr [EBP + -0x10]
005c27c9  IMUL EAX,EAX,0x34
005c27cc  MOV ECX,dword ptr [EBP + 0xffffff58]
005c27d2  MOV EDX,dword ptr [ECX + 0x4]
005c27d5  FSTP float ptr [EDX + EAX*0x1 + 0x8]
005c27d9  PUSH 0x1dc
005c27de  CALL 0x00686d82
005c27e3  ADD ESP,0x4
005c27e6  MOV dword ptr [EBP + -0x34],EAX
005c27e9  MOV dword ptr [EBP + -0x4],0x1
005c27f0  CMP dword ptr [EBP + -0x34],0x0
005c27f4  JZ 0x005c2806
005c27f6  MOV ECX,dword ptr [EBP + -0x34]
005c27f9  CALL 0x00601a80
005c27fe  MOV dword ptr [EBP + 0xffffff24],EAX
005c2804  JMP 0x005c2810
005c2806  MOV dword ptr [EBP + 0xffffff24],0x0
005c2810  MOV EAX,dword ptr [EBP + 0xffffff24]
005c2816  MOV dword ptr [EBP + -0x30],EAX
005c2819  MOV dword ptr [EBP + -0x4],0xffffffff
005c2820  MOV ECX,dword ptr [EBP + -0x30]
005c2823  MOV dword ptr [EBP + -0x14],ECX
005c2826  MOV EDX,dword ptr [EBP + -0x10]
005c2829  ADD EDX,0x3158dc
005c282f  PUSH EDX
005c2830  PUSH 0x3e8
005c2835  MOV EAX,dword ptr [EBP + 0xffffff48]
005c283b  MOV ECX,dword ptr [EAX + 0x50]
005c283e  MOV EDX,dword ptr [ECX + 0x50]
005c2841  PUSH EDX
005c2842  MOV EAX,dword ptr [EBP + 0xffffff48]
005c2848  MOV ECX,dword ptr [EAX + 0x50]
005c284b  MOV EDX,dword ptr [EBP + 0xffffff48]
005c2851  MOV EAX,dword ptr [EDX + 0x50]
005c2854  MOV EDX,dword ptr [EBP + -0x10]
005c2857  IMUL EDX,dword ptr [EAX + 0x54]
005c285b  ADD EDX,dword ptr [ECX + 0x4c]
005c285e  PUSH EDX
005c285f  PUSH 0x6b27f8
005c2864  MOV ECX,dword ptr [EBP + -0x14]
005c2867  CALL 0x005eaec0
005c286c  MOV EAX,dword ptr [EBP + 0xffffff48]
005c2872  MOV ECX,dword ptr [EAX + 0x50]
005c2875  MOV EDX,dword ptr [ECX + 0x54]
005c2878  PUSH EDX
005c2879  MOV ECX,dword ptr [EBP + -0x14]
005c287c  CALL 0x005f5530
005c2881  MOV EAX,dword ptr [EBP + 0xffffff48]
005c2887  MOV ECX,dword ptr [EAX + 0x4]
005c288a  MOV EDX,dword ptr [ECX + 0x10]
005c288d  MOV EAX,dword ptr [EDX + 0x4]
005c2890  MOV dword ptr [EBP + 0xffffff54],EAX
005c2896  MOV ECX,dword ptr [EBP + 0xffffff48]
005c289c  MOV EDX,dword ptr [ECX + 0x50]
005c289f  MOV EAX,dword ptr [EDX + 0x58]
005c28a2  IMUL EAX,dword ptr [EBP + 0xffffff54]
005c28a9  PUSH EAX
005c28aa  MOV ECX,dword ptr [EBP + -0x14]
005c28ad  CALL 0x005f5570
005c28b2  MOV ECX,dword ptr [EBP + -0x14]
005c28b5  MOV EDX,dword ptr [ECX]
005c28b7  MOV ECX,dword ptr [EBP + -0x14]
005c28ba  MOV EAX,dword ptr [EDX + 0x74]
005c28bd  CALL EAX
005c28bf  MOV ECX,dword ptr [EBP + 0xffffff48]
005c28c5  ADD ECX,0x58
005c28c8  MOV dword ptr [EBP + 0xffffff50],ECX
005c28ce  MOV EDX,dword ptr [EBP + 0xffffff50]
005c28d4  CMP dword ptr [EDX + 0x4],0x0
005c28d8  JNZ 0x005c28e6
005c28da  MOV dword ptr [EBP + 0xffffff20],0x0
005c28e4  JMP 0x005c2906
005c28e6  MOV EAX,dword ptr [EBP + 0xffffff50]
005c28ec  MOV ECX,dword ptr [EBP + 0xffffff50]
005c28f2  MOV EAX,dword ptr [EAX + 0x8]
005c28f5  SUB EAX,dword ptr [ECX + 0x4]
005c28f8  CDQ
005c28f9  MOV ECX,0x34
005c28fe  IDIV ECX
005c2900  MOV dword ptr [EBP + 0xffffff20],EAX
005c2906  MOV EDX,dword ptr [EBP + -0x10]
005c2909  CMP EDX,dword ptr [EBP + 0xffffff20]
005c290f  JC 0x005c2917
005c2911  CALL dword ptr [0x006b2274]
005c2917  MOV EAX,dword ptr [EBP + -0x10]
005c291a  IMUL EAX,EAX,0x34
005c291d  MOV ECX,dword ptr [EBP + 0xffffff50]
005c2923  MOV EDX,dword ptr [ECX + 0x4]
005c2926  MOV ECX,dword ptr [EBP + -0x14]
005c2929  MOV dword ptr [EDX + EAX*0x1 + 0x30],ECX
005c292d  JMP 0x005c25ab
005c2932  MOV EDX,dword ptr [EBP + 0xffffff48]
005c2938  MOV EAX,dword ptr [EDX + 0x50]
005c293b  CMP dword ptr [EAX + 0x8],0x0
005c293f  JZ 0x005c29ee
005c2945  PUSH 0x178
005c294a  CALL 0x00686d82
005c294f  ADD ESP,0x4
005c2952  MOV dword ptr [EBP + -0x3c],EAX
005c2955  MOV dword ptr [EBP + -0x4],0x2
005c295c  CMP dword ptr [EBP + -0x3c],0x0
005c2960  JZ 0x005c2972
005c2962  MOV ECX,dword ptr [EBP + -0x3c]
005c2965  CALL 0x005eaaf0
005c296a  MOV dword ptr [EBP + 0xffffff1c],EAX
005c2970  JMP 0x005c297c
005c2972  MOV dword ptr [EBP + 0xffffff1c],0x0
005c297c  MOV ECX,dword ptr [EBP + 0xffffff1c]
005c2982  MOV dword ptr [EBP + -0x38],ECX
005c2985  MOV dword ptr [EBP + -0x4],0xffffffff
005c298c  MOV EDX,dword ptr [EBP + -0x38]
005c298f  MOV dword ptr [EBP + -0x18],EDX
005c2992  PUSH -0x1
005c2994  PUSH 0x15
005c2996  PUSH 0x0
005c2998  PUSH 0x0
005c299a  MOV EAX,dword ptr [EBP + 0xffffff48]
005c29a0  MOV ECX,dword ptr [EAX + 0x50]
005c29a3  MOV EDX,dword ptr [ECX + 0x8]
005c29a6  PUSH EDX
005c29a7  MOV ECX,dword ptr [EBP + -0x18]
005c29aa  CALL 0x005eae80
005c29af  MOV EAX,dword ptr [EBP + 0xffffff48]
005c29b5  MOV ECX,dword ptr [EAX + 0x50]
005c29b8  MOV EDX,dword ptr [ECX + 0xc]
005c29bb  PUSH EDX
005c29bc  MOV ECX,dword ptr [EBP + -0x18]
005c29bf  CALL 0x005eb000
005c29c4  MOV EAX,dword ptr [EBP + 0xffffff48]
005c29ca  MOV ECX,dword ptr [EAX + 0x50]
005c29cd  MOV EDX,dword ptr [ECX + 0x10]
005c29d0  PUSH EDX
005c29d1  MOV EAX,dword ptr [EBP + -0x18]
005c29d4  MOV EDX,dword ptr [EAX]
005c29d6  MOV ECX,dword ptr [EBP + -0x18]
005c29d9  MOV EAX,dword ptr [EDX + 0xb0]
005c29df  CALL EAX
005c29e1  MOV ECX,dword ptr [EBP + -0x18]
005c29e4  MOV EDX,dword ptr [ECX]
005c29e6  MOV ECX,dword ptr [EBP + -0x18]
005c29e9  MOV EAX,dword ptr [EDX + 0x74]
005c29ec  CALL EAX
005c29ee  MOV ECX,dword ptr [EBP + 0xffffff48]
005c29f4  MOV EDX,dword ptr [ECX + 0x50]
005c29f7  CMP dword ptr [EDX + 0x14],0x0
005c29fb  JZ 0x005c2aaa
005c2a01  PUSH 0x178
005c2a06  CALL 0x00686d82
005c2a0b  ADD ESP,0x4
005c2a0e  MOV dword ptr [EBP + -0x44],EAX
005c2a11  MOV dword ptr [EBP + -0x4],0x3
005c2a18  CMP dword ptr [EBP + -0x44],0x0
005c2a1c  JZ 0x005c2a2e
005c2a1e  MOV ECX,dword ptr [EBP + -0x44]
005c2a21  CALL 0x005eaaf0
005c2a26  MOV dword ptr [EBP + 0xffffff18],EAX
005c2a2c  JMP 0x005c2a38
005c2a2e  MOV dword ptr [EBP + 0xffffff18],0x0
005c2a38  MOV EAX,dword ptr [EBP + 0xffffff18]
005c2a3e  MOV dword ptr [EBP + -0x40],EAX
005c2a41  MOV dword ptr [EBP + -0x4],0xffffffff
005c2a48  MOV ECX,dword ptr [EBP + -0x40]
005c2a4b  MOV dword ptr [EBP + -0x1c],ECX
005c2a4e  PUSH -0x1
005c2a50  PUSH 0x17
005c2a52  PUSH 0x0
005c2a54  PUSH 0x0
005c2a56  MOV EDX,dword ptr [EBP + 0xffffff48]
005c2a5c  MOV EAX,dword ptr [EDX + 0x50]
005c2a5f  MOV ECX,dword ptr [EAX + 0x14]
005c2a62  PUSH ECX
005c2a63  MOV ECX,dword ptr [EBP + -0x1c]
005c2a66  CALL 0x005eae80
005c2a6b  MOV EDX,dword ptr [EBP + 0xffffff48]
005c2a71  MOV EAX,dword ptr [EDX + 0x50]
005c2a74  MOV ECX,dword ptr [EAX + 0x18]
005c2a77  PUSH ECX
005c2a78  MOV ECX,dword ptr [EBP + -0x1c]
005c2a7b  CALL 0x005eb000
005c2a80  MOV EDX,dword ptr [EBP + 0xffffff48]
005c2a86  MOV EAX,dword ptr [EDX + 0x50]
005c2a89  MOV ECX,dword ptr [EAX + 0x1c]
005c2a8c  PUSH ECX
005c2a8d  MOV EDX,dword ptr [EBP + -0x1c]
005c2a90  MOV EAX,dword ptr [EDX]
005c2a92  MOV ECX,dword ptr [EBP + -0x1c]
005c2a95  MOV EDX,dword ptr [EAX + 0xb0]
005c2a9b  CALL EDX
005c2a9d  MOV EAX,dword ptr [EBP + -0x1c]
005c2aa0  MOV EDX,dword ptr [EAX]
005c2aa2  MOV ECX,dword ptr [EBP + -0x1c]
005c2aa5  MOV EAX,dword ptr [EDX + 0x74]
005c2aa8  CALL EAX
005c2aaa  MOV ECX,dword ptr [EBP + 0xffffff48]
005c2ab0  CALL 0x005c10b0
005c2ab5  MOV ECX,dword ptr [EBP + 0xffffff48]
005c2abb  MOV EDX,dword ptr [ECX + 0x4]
005c2abe  MOV EAX,dword ptr [EDX + 0x10]
005c2ac1  MOV ECX,dword ptr [EAX + 0x8]
005c2ac4  MOV dword ptr [EBP + 0xffffff4c],ECX
005c2aca  PUSH 0x18
005c2acc  MOV EDX,dword ptr [EBP + 0xffffff48]
005c2ad2  MOV EAX,dword ptr [EDX + 0x50]
005c2ad5  ADD EAX,0x44
005c2ad8  PUSH EAX
005c2ad9  MOV ECX,dword ptr [EBP + 0xffffff4c]
005c2adf  PUSH ECX
005c2ae0  MOV EDX,dword ptr [EBP + 0xffffff48]
005c2ae6  MOV EAX,dword ptr [EDX + 0x50]
005c2ae9  MOV ECX,dword ptr [EAX + 0x38]
005c2aec  PUSH ECX
005c2aed  MOV ECX,dword ptr [EBP + 0xffffff48]
005c2af3  CALL 0x005c0f40
005c2af8  MOV ECX,dword ptr [EBP + 0xffffff48]
005c2afe  CALL 0x005c13e0
005c2b03  MOV ECX,dword ptr [EBP + 0xffffff48]
005c2b09  CALL 0x005c1b60
005c2b0e  PUSH 0x1
005c2b10  MOV ECX,dword ptr [EBP + 0xffffff48]
005c2b16  CALL 0x005c1d60
005c2b1b  MOV ECX,dword ptr [EBP + 0xffffff48]
005c2b21  CALL 0x005c1ed0
005c2b26  MOV ECX,dword ptr [EBP + -0xc]
005c2b29  MOV dword ptr FS:[0x0],ECX
005c2b30  POP ECX
005c2b31  MOV ESP,EBP
005c2b33  POP EBP
005c2b34  RET 0x4
