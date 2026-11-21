; FUN_005f3130  005f3130
005f3130  PUSH EBP
005f3131  MOV EBP,ESP
005f3133  SUB ESP,0xc8
005f3139  MOV EAX,[0x00781870]
005f313e  XOR EAX,EBP
005f3140  MOV dword ptr [EBP + -0xc],EAX
005f3143  MOV dword ptr [EBP + 0xffffff4c],ECX
005f3149  MOV EAX,dword ptr [EBP + 0xffffff4c]
005f314f  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f3155  MOV EDX,dword ptr [ECX + 0x1c]
005f3158  MOV dword ptr [EAX + 0x18],EDX
005f315b  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f3161  CALL 0x005f3e70
005f3166  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f316c  MOV dword ptr [ECX + 0x1c],EAX
005f316f  MOV EDX,dword ptr [EBP + 0xffffff4c]
005f3175  MOV EAX,dword ptr [EBP + 0xffffff4c]
005f317b  MOV ECX,dword ptr [EDX + 0x1c]
005f317e  CMP ECX,dword ptr [EAX + 0x18]
005f3181  JGE 0x005f31c0
005f3183  MOV EDX,dword ptr [EBP + 0xffffff4c]
005f3189  CMP dword ptr [EDX + 0x1c],0x0
005f318d  JLE 0x005f31a6
005f318f  MOV EAX,dword ptr [EBP + 0xffffff4c]
005f3195  MOV ECX,dword ptr [EAX + 0x1c]
005f3198  SUB ECX,0x1
005f319b  MOV EDX,dword ptr [EBP + 0xffffff4c]
005f31a1  MOV dword ptr [EDX + 0x18],ECX
005f31a4  JMP 0x005f31c0
005f31a6  MOV EAX,dword ptr [EBP + 0xffffff4c]
005f31ac  MOV dword ptr [EAX + 0x1c],0x0
005f31b3  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f31b9  MOV dword ptr [ECX + 0x18],0x0
005f31c0  MOV EDX,dword ptr [EBP + 0xffffff4c]
005f31c6  MOV EAX,dword ptr [EBP + 0xffffff4c]
005f31cc  MOV ECX,dword ptr [EDX + 0x1c]
005f31cf  CMP ECX,dword ptr [EAX + 0x18]
005f31d2  JNZ 0x005f31df
005f31d4  MOVZX EDX,byte ptr [0x00795fa1]
005f31db  TEST EDX,EDX
005f31dd  JZ 0x005f31f5
005f31df  MOVZX EAX,byte ptr [0x015e55d3]
005f31e6  TEST EAX,EAX
005f31e8  JNZ 0x005f320d
005f31ea  MOVZX ECX,byte ptr [0x015e55d4]
005f31f1  TEST ECX,ECX
005f31f3  JNZ 0x005f320d
005f31f5  MOV EDX,dword ptr [0x007960d8]
005f31fb  MOV EAX,dword ptr [EDX]
005f31fd  MOV ECX,dword ptr [0x007960d8]
005f3203  MOV EDX,dword ptr [EAX + 0x10]
005f3206  CALL EDX
005f3208  JMP 0x005f37d6
005f320d  MOV EAX,dword ptr [EBP + 0xffffff4c]
005f3213  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f3219  MOV EDX,dword ptr [EAX + 0x1c]
005f321c  SUB EDX,dword ptr [ECX + 0x18]
005f321f  MOV dword ptr [EBP + -0x8],EDX
005f3222  CMP dword ptr [EBP + -0x8],0x0
005f3226  JG 0x005f322f
005f3228  MOV dword ptr [EBP + -0x8],0x1
005f322f  CMP dword ptr [EBP + -0x8],0x3c
005f3233  JLE 0x005f323c
005f3235  MOV dword ptr [EBP + -0x8],0x1
005f323c  CMP dword ptr [EBP + -0x8],0x2
005f3240  JLE 0x005f3249
005f3242  MOV dword ptr [EBP + -0x8],0x2
005f3249  MOV EAX,dword ptr [EBP + 0xffffff4c]
005f324f  MOV ECX,dword ptr [EAX + 0x1c]
005f3252  SUB ECX,dword ptr [EBP + -0x8]
005f3255  MOV EDX,dword ptr [EBP + 0xffffff4c]
005f325b  MOV dword ptr [EDX + 0x20],ECX
005f325e  MOV EAX,dword ptr [EBP + -0x8]
005f3261  MOV ECX,dword ptr [EBP + -0x8]
005f3264  SUB ECX,0x1
005f3267  MOV dword ptr [EBP + -0x8],ECX
005f326a  TEST EAX,EAX
005f326c  JZ 0x005f34be
005f3272  MOV EDX,dword ptr [0x00795094]
005f3278  ADD EDX,0x1
005f327b  MOV dword ptr [0x00795094],EDX
005f3281  MOV EAX,dword ptr [EBP + 0xffffff4c]
005f3287  MOV ECX,dword ptr [EAX + 0x20]
005f328a  ADD ECX,0x1
005f328d  MOV EDX,dword ptr [EBP + 0xffffff4c]
005f3293  MOV dword ptr [EDX + 0x20],ECX
005f3296  MOV EAX,dword ptr [EBP + 0xffffff4c]
005f329c  CMP dword ptr [EAX + 0x2c],-0x1
005f32a0  JZ 0x005f32b7
005f32a2  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f32a8  MOV EDX,dword ptr [ECX + 0x2c]
005f32ab  PUSH EDX
005f32ac  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f32b2  CALL 0x005f3c30
005f32b7  MOV EAX,dword ptr [EBP + 0xffffff4c]
005f32bd  CMP dword ptr [EAX + 0x28],0x0
005f32c1  JZ 0x005f32d1
005f32c3  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f32c9  MOV ECX,dword ptr [ECX + 0x28]
005f32cc  CALL 0x005fc250
005f32d1  CMP dword ptr [0x015e55e4],0x0
005f32d8  JZ 0x005f3356
005f32da  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f32e0  CALL 0x005f3fe0
005f32e5  TEST EAX,EAX
005f32e7  JZ 0x005f3338
005f32e9  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f32ef  CALL 0x005f3fe0
005f32f4  MOVZX EDX,byte ptr [EAX + 0x1b1]
005f32fb  TEST EDX,EDX
005f32fd  JNZ 0x005f3338
005f32ff  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f3305  CALL 0x005f3fe0
005f330a  MOV dword ptr [EBP + 0xffffff48],EAX
005f3310  MOV EAX,dword ptr [EBP + 0xffffff48]
005f3316  MOV EDX,dword ptr [EAX]
005f3318  MOV ECX,dword ptr [EBP + 0xffffff48]
005f331e  MOV EAX,dword ptr [EDX + 0x8]
005f3321  CALL EAX
005f3323  MOV ECX,dword ptr [0x015e55e4]
005f3329  MOV EDX,dword ptr [ECX]
005f332b  MOV ECX,dword ptr [0x015e55e4]
005f3331  MOV EAX,dword ptr [EDX + 0x10]
005f3334  CALL EAX
005f3336  JMP 0x005f3356
005f3338  MOVZX ECX,byte ptr [0x015e55ec]
005f333f  TEST ECX,ECX
005f3341  JNZ 0x005f3356
005f3343  MOV EDX,dword ptr [0x015e55e4]
005f3349  MOV EAX,dword ptr [EDX]
005f334b  MOV ECX,dword ptr [0x015e55e4]
005f3351  MOV EDX,dword ptr [EAX + 0xc]
005f3354  CALL EDX
005f3356  CMP dword ptr [0x007960d8],0x0
005f335d  JZ 0x005f3378
005f335f  MOV EAX,[0x007960d8]
005f3364  CMP dword ptr [EAX + 0x8],0x0
005f3368  JZ 0x005f3378
005f336a  MOV ECX,dword ptr [0x007960d8]
005f3370  MOV ECX,dword ptr [ECX + 0x8]
005f3373  CALL 0x0060acc0
005f3378  MOV dword ptr [EBP + -0x4],0x0
005f337f  JMP 0x005f338a
005f3381  MOV EDX,dword ptr [EBP + -0x4]
005f3384  ADD EDX,0x1
005f3387  MOV dword ptr [EBP + -0x4],EDX
005f338a  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f3390  ADD ECX,0x4
005f3393  CALL 0x0060c9a0
005f3398  CMP dword ptr [EBP + -0x4],EAX
005f339b  JGE 0x005f340b
005f339d  MOV EAX,dword ptr [EBP + -0x4]
005f33a0  PUSH EAX
005f33a1  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f33a7  ADD ECX,0x4
005f33aa  CALL 0x0060ca40
005f33af  MOV dword ptr [EBP + -0x7c],EAX
005f33b2  MOV ECX,dword ptr [EBP + -0x7c]
005f33b5  MOV EDX,dword ptr [ECX + 0x1a4]
005f33bb  MOV dword ptr [EBP + 0xffffff5c],EDX
005f33c1  CMP dword ptr [EBP + 0xffffff5c],0x0
005f33c8  JNZ 0x005f33ec
005f33ca  MOV ECX,dword ptr [EBP + -0x7c]
005f33cd  CALL 0x005f8910
005f33d2  MOVZX EAX,AL
005f33d5  TEST EAX,EAX
005f33d7  JZ 0x005f33ec
005f33d9  MOVZX ECX,byte ptr [0x00795fa5]
005f33e0  TEST ECX,ECX
005f33e2  JZ 0x005f33ec
005f33e4  MOV ECX,dword ptr [EBP + -0x7c]
005f33e7  CALL 0x005f9a80
005f33ec  MOV EDX,dword ptr [EBP + -0x7c]
005f33ef  MOV EAX,dword ptr [EDX + 0x1a8]
005f33f5  MOV dword ptr [EBP + 0xffffff58],EAX
005f33fb  MOV ECX,dword ptr [EBP + 0xffffff58]
005f3401  CALL 0x00613e70
005f3406  JMP 0x005f3381
005f340b  MOV dword ptr [EBP + -0x4],0x0
005f3412  MOV ECX,dword ptr [EBP + -0x4]
005f3415  PUSH ECX
005f3416  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f341c  ADD ECX,0x4
005f341f  CALL 0x0060ca40
005f3424  MOV dword ptr [EBP + -0x7c],EAX
005f3427  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f342d  ADD ECX,0x4
005f3430  CALL 0x0060c9a0
005f3435  CMP dword ptr [EBP + -0x4],EAX
005f3438  JGE 0x005f34b9
005f343a  MOV ECX,dword ptr [EBP + -0x7c]
005f343d  CALL 0x005f89b0
005f3442  MOVZX EDX,AL
005f3445  TEST EDX,EDX
005f3447  JZ 0x005f3496
005f3449  MOV EAX,dword ptr [EBP + -0x7c]
005f344c  MOV dword ptr [EBP + 0xffffff68],EAX
005f3452  MOV ECX,dword ptr [EBP + 0xffffff68]
005f3458  MOV dword ptr [EBP + 0xffffff6c],ECX
005f345e  CMP dword ptr [EBP + 0xffffff6c],0x0
005f3465  JZ 0x005f3483
005f3467  PUSH 0x1
005f3469  MOV EDX,dword ptr [EBP + 0xffffff6c]
005f346f  MOV EAX,dword ptr [EDX]
005f3471  MOV ECX,dword ptr [EBP + 0xffffff6c]
005f3477  MOV EDX,dword ptr [EAX]
005f3479  CALL EDX
005f347b  MOV dword ptr [EBP + 0xffffff44],EAX
005f3481  JMP 0x005f348d
005f3483  MOV dword ptr [EBP + 0xffffff44],0x0
005f348d  MOV dword ptr [EBP + -0x4],0x0
005f3494  JMP 0x005f349f
005f3496  MOV EAX,dword ptr [EBP + -0x4]
005f3499  ADD EAX,0x1
005f349c  MOV dword ptr [EBP + -0x4],EAX
005f349f  MOV ECX,dword ptr [EBP + -0x4]
005f34a2  PUSH ECX
005f34a3  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f34a9  ADD ECX,0x4
005f34ac  CALL 0x0060ca40
005f34b1  MOV dword ptr [EBP + -0x7c],EAX
005f34b4  JMP 0x005f3427
005f34b9  JMP 0x005f325e
005f34be  MOV EDX,dword ptr [EBP + 0xffffff4c]
005f34c4  MOV EAX,dword ptr [EDX + 0x1c]
005f34c7  MOV [0x00795090],EAX
005f34cc  MOV ECX,dword ptr [0x0079508c]
005f34d2  ADD ECX,0x3c
005f34d5  CMP dword ptr [0x00795090],ECX
005f34db  JL 0x005f3602
005f34e1  CMP dword ptr [0x00795078],0x0
005f34e8  JZ 0x005f35ec
005f34ee  MOV EDX,dword ptr [0x00795fac]
005f34f4  IMUL EDX,EDX,0x64
005f34f7  MOV dword ptr [0x00795fac],EDX
005f34fd  MOVZX EAX,byte ptr [0x00795fa5]
005f3504  TEST EAX,EAX
005f3506  JZ 0x005f3514
005f3508  MOV dword ptr [EBP + 0xffffff40],0x6d67ec
005f3512  JMP 0x005f351e
005f3514  MOV dword ptr [EBP + 0xffffff40],0x6d67e8
005f351e  MOV EAX,[0x00795fac]
005f3523  XOR EDX,EDX
005f3525  DIV dword ptr [0x00795fa8]
005f352b  MOV dword ptr [EBP + 0xffffff3c],EAX
005f3531  MOV ECX,dword ptr [0x00795fa8]
005f3537  ADD ECX,0x1
005f353a  MOV dword ptr [0x00795fa8],ECX
005f3540  MOV EDX,dword ptr [EBP + 0xffffff3c]
005f3546  PUSH EDX
005f3547  MOV EAX,dword ptr [EBP + 0xffffff40]
005f354d  PUSH EAX
005f354e  MOV ECX,dword ptr [0x00795090]
005f3554  SUB ECX,dword ptr [0x0079508c]
005f355a  MOV dword ptr [EBP + 0xffffff38],ECX
005f3560  FILD dword ptr [EBP + 0xffffff38]
005f3566  FDIV double ptr [0x006d67e0]
005f356c  FIDIVR dword ptr [0x00795094]
005f3572  CALL 0x00686cc0
005f3577  PUSH EAX
005f3578  PUSH 0x6d67c4
005f357d  LEA EDX,[EBP + -0x78]
005f3580  PUSH EDX
005f3581  CALL dword ptr [0x006b2220]
005f3587  ADD ESP,0x14
005f358a  LEA EAX,[EBP + -0x78]
005f358d  PUSH EAX
005f358e  MOV ECX,dword ptr [0x00795078]
005f3594  MOV EDX,dword ptr [ECX]
005f3596  MOV ECX,dword ptr [0x00795078]
005f359c  MOV EAX,dword ptr [EDX + 0xb4]
005f35a2  CALL EAX
005f35a4  MOV ECX,dword ptr [0x00795078]
005f35aa  CALL 0x005ef050
005f35af  ADD EAX,0x8
005f35b2  PUSH EAX
005f35b3  MOV ECX,dword ptr [0x00795078]
005f35b9  CALL 0x005ecc60
005f35be  MOV ECX,dword ptr [0x00795078]
005f35c4  CALL 0x005ef130
005f35c9  ADD EAX,0x2
005f35cc  PUSH EAX
005f35cd  MOV ECX,dword ptr [0x00795078]
005f35d3  CALL 0x005eccb0
005f35d8  MOV dword ptr [0x00795fa8],0x0
005f35e2  MOV dword ptr [0x00795fac],0x0
005f35ec  MOV ECX,dword ptr [0x00795090]
005f35f2  MOV dword ptr [0x0079508c],ECX
005f35f8  MOV dword ptr [0x00795094],0x0
005f3602  CMP dword ptr [0x0079507c],0x0
005f3609  JZ 0x005f37c4
005f360f  CMP dword ptr [0x00795080],0x0
005f3616  JZ 0x005f37c4
005f361c  CMP dword ptr [0x00795084],0x0
005f3623  JZ 0x005f37c4
005f3629  CALL 0x005ea470
005f362e  MOV dword ptr [EBP + 0xffffff60],EAX
005f3634  MOV dword ptr [EBP + 0xffffff64],EDX
005f363a  MOV EDX,dword ptr [EBP + 0xffffff60]
005f3640  MOV dword ptr [EBP + 0xffffff74],EDX
005f3646  MOV EAX,dword ptr [EBP + 0xffffff64]
005f364c  MOV dword ptr [EBP + 0xffffff78],EAX
005f3652  MOV ECX,dword ptr [EBP + 0xffffff74]
005f3658  MOV dword ptr [EBP + 0xffffff7c],ECX
005f365e  MOV EDX,dword ptr [EBP + 0xffffff78]
005f3664  MOV dword ptr [EBP + -0x80],EDX
005f3667  LEA EAX,[EBP + 0xffffff7c]
005f366d  PUSH EAX
005f366e  CALL 0x005ea400
005f3673  ADD ESP,0x4
005f3676  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f367c  MOV EDX,dword ptr [ECX + 0x14]
005f367f  MOV EAX,dword ptr [EDX + 0x1a8]
005f3685  MOV dword ptr [EBP + 0xffffff54],EAX
005f368b  MOV ECX,dword ptr [EBP + 0xffffff54]
005f3691  MOV EDX,dword ptr [EBP + 0xffffff7c]
005f3697  SUB EDX,dword ptr [ECX + 0x28]
005f369a  MOV dword ptr [EBP + 0xffffff7c],EDX
005f36a0  MOV EAX,dword ptr [EBP + 0xffffff4c]
005f36a6  MOV ECX,dword ptr [EAX + 0x14]
005f36a9  MOV EDX,dword ptr [ECX + 0x1a8]
005f36af  MOV dword ptr [EBP + 0xffffff50],EDX
005f36b5  MOV EAX,dword ptr [EBP + 0xffffff50]
005f36bb  MOV ECX,dword ptr [EBP + -0x80]
005f36be  SUB ECX,dword ptr [EAX + 0x2c]
005f36c1  MOV dword ptr [EBP + -0x80],ECX
005f36c4  MOV EDX,dword ptr [EBP + 0xffffff78]
005f36ca  PUSH EDX
005f36cb  MOV EAX,dword ptr [EBP + 0xffffff74]
005f36d1  PUSH EAX
005f36d2  PUSH 0x6d67b4
005f36d7  LEA ECX,[EBP + -0x78]
005f36da  PUSH ECX
005f36db  CALL dword ptr [0x006b2220]
005f36e1  ADD ESP,0x10
005f36e4  LEA EDX,[EBP + -0x78]
005f36e7  PUSH EDX
005f36e8  MOV EAX,[0x0079507c]
005f36ed  MOV EDX,dword ptr [EAX]
005f36ef  MOV ECX,dword ptr [0x0079507c]
005f36f5  MOV EAX,dword ptr [EDX + 0xb4]
005f36fb  CALL EAX
005f36fd  MOV ECX,dword ptr [EBP + -0x80]
005f3700  PUSH ECX
005f3701  MOV EDX,dword ptr [EBP + 0xffffff7c]
005f3707  PUSH EDX
005f3708  PUSH 0x6d67a4
005f370d  LEA EAX,[EBP + -0x78]
005f3710  PUSH EAX
005f3711  CALL dword ptr [0x006b2220]
005f3717  ADD ESP,0x10
005f371a  LEA ECX,[EBP + -0x78]
005f371d  PUSH ECX
005f371e  MOV EDX,dword ptr [0x00795080]
005f3724  MOV EAX,dword ptr [EDX]
005f3726  MOV ECX,dword ptr [0x00795080]
005f372c  MOV EDX,dword ptr [EAX + 0xb4]
005f3732  CALL EDX
005f3734  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f373a  CALL 0x005f3fe0
005f373f  TEST EAX,EAX
005f3741  JZ 0x005f378d
005f3743  MOV ECX,dword ptr [EBP + 0xffffff4c]
005f3749  CALL 0x005f3fe0
005f374e  MOV dword ptr [EBP + 0xffffff70],EAX
005f3754  MOV ECX,dword ptr [EBP + 0xffffff70]
005f375a  CALL 0x005f84f0
005f375f  MOV ECX,dword ptr [EBP + -0x80]
005f3762  SUB ECX,EAX
005f3764  PUSH ECX
005f3765  MOV ECX,dword ptr [EBP + 0xffffff70]
005f376b  CALL 0x005f84d0
005f3770  MOV EDX,dword ptr [EBP + 0xffffff7c]
005f3776  SUB EDX,EAX
005f3778  PUSH EDX
005f3779  PUSH 0x6d6794
005f377e  LEA EAX,[EBP + -0x78]
005f3781  PUSH EAX
005f3782  CALL dword ptr [0x006b2220]
005f3788  ADD ESP,0x10
005f378b  JMP 0x005f37aa
005f378d  MOV ECX,dword ptr [EBP + -0x80]
005f3790  PUSH ECX
005f3791  MOV EDX,dword ptr [EBP + 0xffffff7c]
005f3797  PUSH EDX
005f3798  PUSH 0x6d6794
005f379d  LEA EAX,[EBP + -0x78]
005f37a0  PUSH EAX
005f37a1  CALL dword ptr [0x006b2220]
005f37a7  ADD ESP,0x10
005f37aa  LEA ECX,[EBP + -0x78]
005f37ad  PUSH ECX
005f37ae  MOV EDX,dword ptr [0x00795084]
005f37b4  MOV EAX,dword ptr [EDX]
005f37b6  MOV ECX,dword ptr [0x00795084]
005f37bc  MOV EDX,dword ptr [EAX + 0xb4]
005f37c2  CALL EDX
005f37c4  MOV EAX,[0x007960d8]
005f37c9  MOV EDX,dword ptr [EAX]
005f37cb  MOV ECX,dword ptr [0x007960d8]
005f37d1  MOV EAX,dword ptr [EDX + 0x10]
005f37d4  CALL EAX
005f37d6  MOV ECX,dword ptr [EBP + -0xc]
005f37d9  XOR ECX,EBP
005f37db  CALL 0x00686d72
005f37e0  MOV ESP,EBP
005f37e2  POP EBP
005f37e3  RET
