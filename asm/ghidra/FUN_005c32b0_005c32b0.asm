; FUN_005c32b0  005c32b0
005c32b0  PUSH EBP
005c32b1  MOV EBP,ESP
005c32b3  SUB ESP,0x7c
005c32b6  MOV dword ptr [EBP + -0x50],ECX
005c32b9  MOV ECX,dword ptr [EBP + -0x50]
005c32bc  CALL 0x005c1550
005c32c1  MOV EAX,[0x007960d8]
005c32c6  MOV ECX,dword ptr [EAX + 0xc]
005c32c9  MOV EDX,dword ptr [0x007960d8]
005c32cf  MOV EAX,dword ptr [EDX + 0xc]
005c32d2  MOV EDX,dword ptr [ECX]
005c32d4  MOV ECX,EAX
005c32d6  MOV EAX,dword ptr [EDX + 0x8]
005c32d9  CALL EAX
005c32db  MOV dword ptr [EBP + -0x8],EAX
005c32de  FILD dword ptr [EBP + -0x8]
005c32e1  FISUB dword ptr [0x0079360c]
005c32e7  FDIV double ptr [0x006bc208]
005c32ed  FSTP float ptr [EBP + -0xc]
005c32f0  MOV ECX,dword ptr [EBP + -0x8]
005c32f3  MOV dword ptr [0x0079360c],ECX
005c32f9  FLD float ptr [EBP + -0xc]
005c32fc  FCOMP double ptr [0x006d1dc8]
005c3302  FNSTSW AX
005c3304  TEST AH,0x41
005c3307  JNZ 0x005c3312
005c3309  FLD float ptr [0x006d1dc0]
005c330f  FSTP float ptr [EBP + -0xc]
005c3312  MOV ECX,dword ptr [EBP + -0x50]
005c3315  CALL 0x005c21c0
005c331a  FMUL float ptr [EBP + -0xc]
005c331d  FSTP float ptr [EBP + -0xc]
005c3320  MOV EDX,dword ptr [EBP + -0x50]
005c3323  CMP dword ptr [EDX + 0x54],0x3
005c3327  JNZ 0x005c3342
005c3329  MOV EAX,dword ptr [EBP + -0x50]
005c332c  MOV ECX,dword ptr [EBP + -0x8]
005c332f  SUB ECX,dword ptr [EAX + 0x68]
005c3332  CMP ECX,0xbb8
005c3338  JLE 0x005c3342
005c333a  MOV ECX,dword ptr [EBP + -0x50]
005c333d  CALL 0x005c1a80
005c3342  MOV byte ptr [EBP + -0xe],0x1
005c3346  MOV byte ptr [EBP + -0xd],0x1
005c334a  MOV dword ptr [EBP + -0x4],0x0
005c3351  JMP 0x005c335c
005c3353  MOV EDX,dword ptr [EBP + -0x4]
005c3356  ADD EDX,0x1
005c3359  MOV dword ptr [EBP + -0x4],EDX
005c335c  MOV EAX,dword ptr [EBP + -0x50]
005c335f  MOV ECX,dword ptr [EAX + 0x4]
005c3362  MOV EDX,dword ptr [ECX + 0x10]
005c3365  MOV EAX,dword ptr [EDX]
005c3367  MOV dword ptr [EBP + -0x18],EAX
005c336a  MOV ECX,dword ptr [EBP + -0x4]
005c336d  CMP ECX,dword ptr [EBP + -0x18]
005c3370  JGE 0x005c34d8
005c3376  MOV EDX,dword ptr [EBP + -0x50]
005c3379  ADD EDX,0x58
005c337c  MOV dword ptr [EBP + -0x1c],EDX
005c337f  MOV EAX,dword ptr [EBP + -0x1c]
005c3382  CMP dword ptr [EAX + 0x4],0x0
005c3386  JNZ 0x005c3391
005c3388  MOV dword ptr [EBP + -0x54],0x0
005c338f  JMP 0x005c33a8
005c3391  MOV ECX,dword ptr [EBP + -0x1c]
005c3394  MOV EDX,dword ptr [EBP + -0x1c]
005c3397  MOV EAX,dword ptr [ECX + 0x8]
005c339a  SUB EAX,dword ptr [EDX + 0x4]
005c339d  CDQ
005c339e  MOV ECX,0x34
005c33a3  IDIV ECX
005c33a5  MOV dword ptr [EBP + -0x54],EAX
005c33a8  MOV EDX,dword ptr [EBP + -0x4]
005c33ab  CMP EDX,dword ptr [EBP + -0x54]
005c33ae  JC 0x005c33b6
005c33b0  CALL dword ptr [0x006b2274]
005c33b6  PUSH ECX
005c33b7  FLD float ptr [EBP + -0xc]
005c33ba  FSTP float ptr [ESP]
005c33bd  MOV ECX,dword ptr [EBP + -0x4]
005c33c0  IMUL ECX,ECX,0x34
005c33c3  MOV EAX,dword ptr [EBP + -0x1c]
005c33c6  ADD ECX,dword ptr [EAX + 0x4]
005c33c9  CALL 0x005c3b10
005c33ce  MOV ECX,dword ptr [EBP + -0x50]
005c33d1  ADD ECX,0x58
005c33d4  MOV dword ptr [EBP + -0x20],ECX
005c33d7  MOV EDX,dword ptr [EBP + -0x20]
005c33da  CMP dword ptr [EDX + 0x4],0x0
005c33de  JNZ 0x005c33e9
005c33e0  MOV dword ptr [EBP + -0x58],0x0
005c33e7  JMP 0x005c3400
005c33e9  MOV EAX,dword ptr [EBP + -0x20]
005c33ec  MOV ECX,dword ptr [EBP + -0x20]
005c33ef  MOV EAX,dword ptr [EAX + 0x8]
005c33f2  SUB EAX,dword ptr [ECX + 0x4]
005c33f5  CDQ
005c33f6  MOV ECX,0x34
005c33fb  IDIV ECX
005c33fd  MOV dword ptr [EBP + -0x58],EAX
005c3400  MOV EDX,dword ptr [EBP + -0x4]
005c3403  CMP EDX,dword ptr [EBP + -0x58]
005c3406  JC 0x005c340e
005c3408  CALL dword ptr [0x006b2274]
005c340e  MOV EAX,dword ptr [EBP + -0x4]
005c3411  IMUL EAX,EAX,0x34
005c3414  MOV ECX,dword ptr [EBP + -0x20]
005c3417  MOV EDX,dword ptr [ECX + 0x4]
005c341a  CMP dword ptr [EDX + EAX*0x1 + 0x1c],0x4
005c341f  JGE 0x005c347a
005c3421  MOV EAX,dword ptr [EBP + -0x50]
005c3424  ADD EAX,0x58
005c3427  MOV dword ptr [EBP + -0x24],EAX
005c342a  MOV ECX,dword ptr [EBP + -0x24]
005c342d  CMP dword ptr [ECX + 0x4],0x0
005c3431  JNZ 0x005c343c
005c3433  MOV dword ptr [EBP + -0x5c],0x0
005c343a  JMP 0x005c3455
005c343c  MOV EDX,dword ptr [EBP + -0x24]
005c343f  MOV EAX,dword ptr [EBP + -0x24]
005c3442  MOV ECX,dword ptr [EDX + 0x8]
005c3445  SUB ECX,dword ptr [EAX + 0x4]
005c3448  MOV EAX,ECX
005c344a  CDQ
005c344b  MOV ECX,0x34
005c3450  IDIV ECX
005c3452  MOV dword ptr [EBP + -0x5c],EAX
005c3455  MOV EDX,dword ptr [EBP + -0x4]
005c3458  CMP EDX,dword ptr [EBP + -0x5c]
005c345b  JC 0x005c3463
005c345d  CALL dword ptr [0x006b2274]
005c3463  MOV EAX,dword ptr [EBP + -0x4]
005c3466  IMUL EAX,EAX,0x34
005c3469  MOV ECX,dword ptr [EBP + -0x24]
005c346c  MOV EDX,dword ptr [ECX + 0x4]
005c346f  CMP dword ptr [EDX + EAX*0x1 + 0x1c],0x1
005c3474  JZ 0x005c347a
005c3476  MOV byte ptr [EBP + -0xe],0x0
005c347a  MOV EAX,dword ptr [EBP + -0x50]
005c347d  ADD EAX,0x58
005c3480  MOV dword ptr [EBP + -0x28],EAX
005c3483  MOV ECX,dword ptr [EBP + -0x28]
005c3486  CMP dword ptr [ECX + 0x4],0x0
005c348a  JNZ 0x005c3495
005c348c  MOV dword ptr [EBP + -0x60],0x0
005c3493  JMP 0x005c34ae
005c3495  MOV EDX,dword ptr [EBP + -0x28]
005c3498  MOV EAX,dword ptr [EBP + -0x28]
005c349b  MOV ECX,dword ptr [EDX + 0x8]
005c349e  SUB ECX,dword ptr [EAX + 0x4]
005c34a1  MOV EAX,ECX
005c34a3  CDQ
005c34a4  MOV ECX,0x34
005c34a9  IDIV ECX
005c34ab  MOV dword ptr [EBP + -0x60],EAX
005c34ae  MOV EDX,dword ptr [EBP + -0x4]
005c34b1  CMP EDX,dword ptr [EBP + -0x60]
005c34b4  JC 0x005c34bc
005c34b6  CALL dword ptr [0x006b2274]
005c34bc  MOV EAX,dword ptr [EBP + -0x4]
005c34bf  IMUL EAX,EAX,0x34
005c34c2  MOV ECX,dword ptr [EBP + -0x28]
005c34c5  MOV EDX,dword ptr [ECX + 0x4]
005c34c8  CMP dword ptr [EDX + EAX*0x1 + 0x1c],0x1
005c34cd  JZ 0x005c34d3
005c34cf  MOV byte ptr [EBP + -0xd],0x0
005c34d3  JMP 0x005c3353
005c34d8  MOV EAX,dword ptr [EBP + -0x50]
005c34db  MOV EDX,dword ptr [EAX]
005c34dd  MOV ECX,dword ptr [EBP + -0x50]
005c34e0  MOV EAX,dword ptr [EDX + 0x24]
005c34e3  CALL EAX
005c34e5  MOVZX ECX,AL
005c34e8  TEST ECX,ECX
005c34ea  JZ 0x005c3738
005c34f0  MOV EDX,dword ptr [EBP + -0x50]
005c34f3  CMP dword ptr [EDX + 0x54],0x2
005c34f7  JZ 0x005c3738
005c34fd  MOVZX EAX,byte ptr [EBP + -0xe]
005c3501  TEST EAX,EAX
005c3503  JZ 0x005c3738
005c3509  PUSH 0x2
005c350b  MOV ECX,dword ptr [EBP + -0x50]
005c350e  CALL 0x005c3110
005c3513  MOV ECX,dword ptr [EBP + -0x50]
005c3516  MOV ECX,dword ptr [ECX + 0x4]
005c3519  CALL 0x005c90c0
005c351e  MOV dword ptr [EBP + -0x4],0x0
005c3525  JMP 0x005c3530
005c3527  MOV EDX,dword ptr [EBP + -0x4]
005c352a  ADD EDX,0x1
005c352d  MOV dword ptr [EBP + -0x4],EDX
005c3530  MOV EAX,dword ptr [EBP + -0x50]
005c3533  MOV ECX,dword ptr [EAX + 0x4]
005c3536  MOV EDX,dword ptr [ECX + 0x10]
005c3539  MOV EAX,dword ptr [EDX]
005c353b  MOV dword ptr [EBP + -0x2c],EAX
005c353e  MOV ECX,dword ptr [EBP + -0x4]
005c3541  CMP ECX,dword ptr [EBP + -0x2c]
005c3544  JGE 0x005c3738
005c354a  MOV EDX,dword ptr [EBP + -0x50]
005c354d  ADD EDX,0x58
005c3550  MOV dword ptr [EBP + -0x30],EDX
005c3553  MOV EAX,dword ptr [EBP + -0x30]
005c3556  CMP dword ptr [EAX + 0x4],0x0
005c355a  JNZ 0x005c3565
005c355c  MOV dword ptr [EBP + -0x64],0x0
005c3563  JMP 0x005c357c
005c3565  MOV ECX,dword ptr [EBP + -0x30]
005c3568  MOV EDX,dword ptr [EBP + -0x30]
005c356b  MOV EAX,dword ptr [ECX + 0x8]
005c356e  SUB EAX,dword ptr [EDX + 0x4]
005c3571  CDQ
005c3572  MOV ECX,0x34
005c3577  IDIV ECX
005c3579  MOV dword ptr [EBP + -0x64],EAX
005c357c  MOV EDX,dword ptr [EBP + -0x4]
005c357f  CMP EDX,dword ptr [EBP + -0x64]
005c3582  JC 0x005c358a
005c3584  CALL dword ptr [0x006b2274]
005c358a  MOV EAX,dword ptr [EBP + -0x4]
005c358d  IMUL EAX,EAX,0x34
005c3590  MOV ECX,dword ptr [EBP + -0x30]
005c3593  MOV EDX,dword ptr [ECX + 0x4]
005c3596  CMP dword ptr [EDX + EAX*0x1 + 0x1c],0x5
005c359b  JL 0x005c359f
005c359d  JMP 0x005c3527
005c359f  MOV EAX,dword ptr [EBP + -0x50]
005c35a2  ADD EAX,0x58
005c35a5  MOV dword ptr [EBP + -0x34],EAX
005c35a8  MOV ECX,dword ptr [EBP + -0x34]
005c35ab  CMP dword ptr [ECX + 0x4],0x0
005c35af  JNZ 0x005c35ba
005c35b1  MOV dword ptr [EBP + -0x68],0x0
005c35b8  JMP 0x005c35d3
005c35ba  MOV EDX,dword ptr [EBP + -0x34]
005c35bd  MOV EAX,dword ptr [EBP + -0x34]
005c35c0  MOV ECX,dword ptr [EDX + 0x8]
005c35c3  SUB ECX,dword ptr [EAX + 0x4]
005c35c6  MOV EAX,ECX
005c35c8  CDQ
005c35c9  MOV ECX,0x34
005c35ce  IDIV ECX
005c35d0  MOV dword ptr [EBP + -0x68],EAX
005c35d3  MOV EDX,dword ptr [EBP + -0x4]
005c35d6  CMP EDX,dword ptr [EBP + -0x68]
005c35d9  JC 0x005c35e1
005c35db  CALL dword ptr [0x006b2274]
005c35e1  MOV EAX,dword ptr [EBP + -0x4]
005c35e4  IMUL EAX,EAX,0x34
005c35e7  MOV ECX,dword ptr [EBP + -0x34]
005c35ea  MOV EDX,dword ptr [ECX + 0x4]
005c35ed  CMP dword ptr [EDX + EAX*0x1 + 0x1c],0x1
005c35f2  JNZ 0x005c35f9
005c35f4  JMP 0x005c3527
005c35f9  MOV EAX,dword ptr [EBP + -0x50]
005c35fc  ADD EAX,0x58
005c35ff  MOV dword ptr [EBP + -0x38],EAX
005c3602  MOV ECX,dword ptr [EBP + -0x38]
005c3605  CMP dword ptr [ECX + 0x4],0x0
005c3609  JNZ 0x005c3614
005c360b  MOV dword ptr [EBP + -0x6c],0x0
005c3612  JMP 0x005c362d
005c3614  MOV EDX,dword ptr [EBP + -0x38]
005c3617  MOV EAX,dword ptr [EBP + -0x38]
005c361a  MOV ECX,dword ptr [EDX + 0x8]
005c361d  SUB ECX,dword ptr [EAX + 0x4]
005c3620  MOV EAX,ECX
005c3622  CDQ
005c3623  MOV ECX,0x34
005c3628  IDIV ECX
005c362a  MOV dword ptr [EBP + -0x6c],EAX
005c362d  MOV EDX,dword ptr [EBP + -0x4]
005c3630  CMP EDX,dword ptr [EBP + -0x6c]
005c3633  JC 0x005c363b
005c3635  CALL dword ptr [0x006b2274]
005c363b  MOV EAX,dword ptr [EBP + -0x4]
005c363e  IMUL EAX,EAX,0x34
005c3641  MOV ECX,dword ptr [EBP + -0x38]
005c3644  MOV EDX,dword ptr [ECX + 0x4]
005c3647  MOV dword ptr [EDX + EAX*0x1 + 0x1c],0x5
005c364f  MOV EAX,dword ptr [EBP + -0x50]
005c3652  ADD EAX,0x58
005c3655  MOV dword ptr [EBP + -0x3c],EAX
005c3658  MOV ECX,dword ptr [EBP + -0x3c]
005c365b  CMP dword ptr [ECX + 0x4],0x0
005c365f  JNZ 0x005c366a
005c3661  MOV dword ptr [EBP + -0x70],0x0
005c3668  JMP 0x005c3683
005c366a  MOV EDX,dword ptr [EBP + -0x3c]
005c366d  MOV EAX,dword ptr [EBP + -0x3c]
005c3670  MOV ECX,dword ptr [EDX + 0x8]
005c3673  SUB ECX,dword ptr [EAX + 0x4]
005c3676  MOV EAX,ECX
005c3678  CDQ
005c3679  MOV ECX,0x34
005c367e  IDIV ECX
005c3680  MOV dword ptr [EBP + -0x70],EAX
005c3683  MOV EDX,dword ptr [EBP + -0x4]
005c3686  CMP EDX,dword ptr [EBP + -0x70]
005c3689  JC 0x005c3691
005c368b  CALL dword ptr [0x006b2274]
005c3691  MOV EAX,dword ptr [EBP + -0x50]
005c3694  MOV ECX,dword ptr [EAX + 0x50]
005c3697  MOV EDX,dword ptr [EBP + -0x4]
005c369a  IMUL EDX,EDX,0x34
005c369d  MOV EAX,dword ptr [EBP + -0x3c]
005c36a0  MOV EAX,dword ptr [EAX + 0x4]
005c36a3  FLD float ptr [ECX + 0x7c]
005c36a6  FSTP float ptr [EAX + EDX*0x1 + 0x10]
005c36aa  MOV ECX,dword ptr [EBP + -0x50]
005c36ad  MOV EDX,dword ptr [ECX + 0x4]
005c36b0  MOV dword ptr [EBP + -0x40],EDX
005c36b3  MOV EAX,dword ptr [EBP + -0x4]
005c36b6  MOV ECX,dword ptr [EBP + -0x40]
005c36b9  CMP dword ptr [ECX + EAX*0x4 + 0x18],0x0
005c36be  JL 0x005c36cf
005c36c0  MOV EDX,dword ptr [EBP + -0x4]
005c36c3  MOV EAX,dword ptr [EBP + -0x40]
005c36c6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
005c36ca  MOV dword ptr [EBP + -0x74],ECX
005c36cd  JMP 0x005c36de
005c36cf  MOV EDX,dword ptr [EBP + -0x4]
005c36d2  MOV EAX,dword ptr [EBP + -0x40]
005c36d5  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
005c36d9  NEG ECX
005c36db  MOV dword ptr [EBP + -0x74],ECX
005c36de  MOV EDX,dword ptr [EBP + -0x50]
005c36e1  ADD EDX,0x58
005c36e4  MOV dword ptr [EBP + -0x44],EDX
005c36e7  MOV EAX,dword ptr [EBP + -0x44]
005c36ea  CMP dword ptr [EAX + 0x4],0x0
005c36ee  JNZ 0x005c36f9
005c36f0  MOV dword ptr [EBP + -0x78],0x0
005c36f7  JMP 0x005c3710
005c36f9  MOV ECX,dword ptr [EBP + -0x44]
005c36fc  MOV EDX,dword ptr [EBP + -0x44]
005c36ff  MOV EAX,dword ptr [ECX + 0x8]
005c3702  SUB EAX,dword ptr [EDX + 0x4]
005c3705  CDQ
005c3706  MOV ECX,0x34
005c370b  IDIV ECX
005c370d  MOV dword ptr [EBP + -0x78],EAX
005c3710  MOV EDX,dword ptr [EBP + -0x4]
005c3713  CMP EDX,dword ptr [EBP + -0x78]
005c3716  JC 0x005c371e
005c3718  CALL dword ptr [0x006b2274]
005c371e  MOV EAX,dword ptr [EBP + -0x74]
005c3721  PUSH EAX
005c3722  MOV ECX,dword ptr [EBP + -0x4]
005c3725  IMUL ECX,ECX,0x34
005c3728  MOV EDX,dword ptr [EBP + -0x44]
005c372b  ADD ECX,dword ptr [EDX + 0x4]
005c372e  CALL 0x005c42d0
005c3733  JMP 0x005c3527
005c3738  MOV EAX,dword ptr [EBP + -0x50]
005c373b  MOV EDX,dword ptr [EAX]
005c373d  MOV ECX,dword ptr [EBP + -0x50]
005c3740  MOV EAX,dword ptr [EDX + 0x24]
005c3743  CALL EAX
005c3745  MOVZX ECX,AL
005c3748  TEST ECX,ECX
005c374a  JZ 0x005c3850
005c3750  MOVZX EDX,byte ptr [EBP + -0xd]
005c3754  TEST EDX,EDX
005c3756  JZ 0x005c3850
005c375c  MOV EAX,[0x007960d8]
005c3761  MOV ECX,dword ptr [EAX + 0xc]
005c3764  MOV EDX,dword ptr [0x007960d8]
005c376a  MOV EAX,dword ptr [EDX + 0xc]
005c376d  MOV EDX,dword ptr [ECX]
005c376f  MOV ECX,EAX
005c3771  MOV EAX,dword ptr [EDX + 0x8]
005c3774  CALL EAX
005c3776  MOV ECX,dword ptr [EBP + -0x50]
005c3779  MOV dword ptr [ECX + 0x68],EAX
005c377c  PUSH 0x0
005c377e  MOV EDX,dword ptr [EBP + -0x50]
005c3781  MOV EAX,dword ptr [EDX + 0x50]
005c3784  ADD EAX,0x88
005c3789  PUSH EAX
005c378a  CALL 0x00610e70
005c378f  ADD ESP,0x8
005c3792  PUSH 0x0
005c3794  MOV ECX,dword ptr [0x007947e0]
005c379a  CALL 0x005dd400
005c379f  MOV ECX,dword ptr [EBP + -0x50]
005c37a2  MOV ECX,dword ptr [ECX + 0x4]
005c37a5  CALL 0x005c9140
005c37aa  MOV EDX,dword ptr [EBP + -0x50]
005c37ad  MOV ECX,dword ptr [EDX + 0x4]
005c37b0  CALL 0x005c9740
005c37b5  MOVZX EAX,AL
005c37b8  TEST EAX,EAX
005c37ba  JZ 0x005c37dd
005c37bc  MOV ECX,dword ptr [EBP + -0x50]
005c37bf  MOV EDX,dword ptr [ECX + 0x50]
005c37c2  ADD EDX,0xc8
005c37c8  PUSH EDX
005c37c9  CALL 0x00610980
005c37ce  ADD ESP,0x4
005c37d1  PUSH 0x3
005c37d3  MOV ECX,dword ptr [EBP + -0x50]
005c37d6  CALL 0x005c3110
005c37db  JMP 0x005c3850
005c37dd  PUSH 0x0
005c37df  MOV EAX,dword ptr [EBP + -0x50]
005c37e2  MOV ECX,dword ptr [EAX + 0x50]
005c37e5  ADD ECX,0x88
005c37eb  PUSH ECX
005c37ec  CALL 0x00610e70
005c37f1  ADD ESP,0x8
005c37f4  MOV EDX,dword ptr [EBP + -0x50]
005c37f7  MOV ECX,dword ptr [EDX + 0x4]
005c37fa  CALL 0x005be3f0
005c37ff  TEST EAX,EAX
005c3801  JLE 0x005c3846
005c3803  MOV EAX,dword ptr [EBP + -0x50]
005c3806  MOV ECX,dword ptr [EAX + 0x4]
005c3809  CALL 0x005c9940
005c380e  MOVZX ECX,AL
005c3811  TEST ECX,ECX
005c3813  JZ 0x005c3825
005c3815  MOV EDX,dword ptr [EBP + -0x50]
005c3818  MOV EAX,dword ptr [EDX + 0x50]
005c381b  ADD EAX,0xe8
005c3820  MOV dword ptr [EBP + -0x7c],EAX
005c3823  JMP 0x005c3834
005c3825  MOV ECX,dword ptr [EBP + -0x50]
005c3828  MOV EDX,dword ptr [ECX + 0x50]
005c382b  ADD EDX,0xa8
005c3831  MOV dword ptr [EBP + -0x7c],EDX
005c3834  MOV EAX,dword ptr [EBP + -0x7c]
005c3837  MOV dword ptr [EBP + -0x14],EAX
005c383a  MOV ECX,dword ptr [EBP + -0x14]
005c383d  PUSH ECX
005c383e  CALL 0x00610980
005c3843  ADD ESP,0x4
005c3846  PUSH 0x0
005c3848  MOV ECX,dword ptr [EBP + -0x50]
005c384b  CALL 0x005c3110
005c3850  MOV ECX,dword ptr [EBP + -0x50]
005c3853  CALL 0x005c1b60
005c3858  PUSH 0x0
005c385a  MOV ECX,dword ptr [EBP + -0x50]
005c385d  CALL 0x005c1d60
005c3862  MOV ESP,EBP
005c3864  POP EBP
005c3865  RET
