; FUN_004cfb30  004cfb30
004cfb30  PUSH EBP
004cfb31  MOV EBP,ESP
004cfb33  SUB ESP,0x60
004cfb36  PUSH ESI
004cfb37  MOV dword ptr [EBP + -0x28],ECX
004cfb3a  MOVSX EAX,word ptr [EBP + 0x8]
004cfb3e  TEST EAX,EAX
004cfb40  JGE 0x004cfb59
004cfb42  PUSH 0xd35
004cfb47  PUSH 0x6bf384
004cfb4c  PUSH 0x6bf888
004cfb51  CALL 0x005e9f20
004cfb56  ADD ESP,0xc
004cfb59  MOVSX ESI,word ptr [EBP + 0x8]
004cfb5d  MOV ECX,dword ptr [0x00791364]
004cfb63  CALL 0x0047f950
004cfb68  CMP ESI,EAX
004cfb6a  JL 0x004cfb83
004cfb6c  PUSH 0xd36
004cfb71  PUSH 0x6bf384
004cfb76  PUSH 0x6bf858
004cfb7b  CALL 0x005e9f20
004cfb80  ADD ESP,0xc
004cfb83  MOVSX EAX,word ptr [EBP + 0xc]
004cfb87  TEST EAX,EAX
004cfb89  JG 0x004cfba2
004cfb8b  PUSH 0xd37
004cfb90  PUSH 0x6bf384
004cfb95  PUSH 0x6bf7c4
004cfb9a  CALL 0x005e9f20
004cfb9f  ADD ESP,0xc
004cfba2  MOVSX EDX,word ptr [EBP + 0xc]
004cfba6  CMP EDX,0x6
004cfba9  JLE 0x004cfbc2
004cfbab  PUSH 0xd38
004cfbb0  PUSH 0x6bf384
004cfbb5  PUSH 0x6bf78c
004cfbba  CALL 0x005e9f20
004cfbbf  ADD ESP,0xc
004cfbc2  MOVSX ECX,word ptr [EBP + 0x10]
004cfbc6  CMP ECX,0x2
004cfbc9  JGE 0x004cfbe2
004cfbcb  PUSH 0xd39
004cfbd0  PUSH 0x6bf384
004cfbd5  PUSH 0x6bf778
004cfbda  CALL 0x005e9f20
004cfbdf  ADD ESP,0xc
004cfbe2  MOVSX ESI,word ptr [EBP + 0x10]
004cfbe6  MOV ECX,dword ptr [0x00791364]
004cfbec  CALL 0x0047f950
004cfbf1  CMP ESI,EAX
004cfbf3  JLE 0x004cfc0c
004cfbf5  PUSH 0xd3a
004cfbfa  PUSH 0x6bf384
004cfbff  PUSH 0x6bf740
004cfc04  CALL 0x005e9f20
004cfc09  ADD ESP,0xc
004cfc0c  FLDZ
004cfc0e  FSTP double ptr [EBP + -0x20]
004cfc11  MOV word ptr [EBP + -0x24],0x0
004cfc17  JMP 0x004cfc25
004cfc19  MOV CX,word ptr [EBP + -0x24]
004cfc1d  ADD CX,0x1
004cfc21  MOV word ptr [EBP + -0x24],CX
004cfc25  MOVSX EDX,word ptr [EBP + -0x24]
004cfc29  CMP EDX,0x6
004cfc2c  JGE 0x004cfc84
004cfc2e  MOVSX EAX,word ptr [EBP + -0x24]
004cfc32  IMUL EAX,EAX,0xe
004cfc35  MOV ECX,dword ptr [EBP + -0x28]
004cfc38  LEA EDX,[ECX + EAX*0x1 + 0xb8]
004cfc3f  MOVSX EAX,word ptr [EBP + 0x10]
004cfc43  MOVSX ECX,word ptr [EDX + EAX*0x2 + -0x4]
004cfc48  MOV dword ptr [EBP + -0x2c],ECX
004cfc4b  FILD dword ptr [EBP + -0x2c]
004cfc4e  MOV EDX,dword ptr [EBP + -0x28]
004cfc51  MOVSX EAX,word ptr [EDX + 0x10c]
004cfc58  MOV dword ptr [EBP + -0x30],EAX
004cfc5b  FILD dword ptr [EBP + -0x30]
004cfc5e  FADDP
004cfc60  FDIV double ptr [0x006b4b00]
004cfc66  MOVSX ECX,word ptr [EBP + -0x24]
004cfc6a  ADD ECX,0x1
004cfc6d  PUSH ECX
004cfc6e  FSTP double ptr [EBP + -0x38]
004cfc71  CALL 0x0048e500
004cfc76  ADD ESP,0x4
004cfc79  FMUL double ptr [EBP + -0x38]
004cfc7c  FADD double ptr [EBP + -0x20]
004cfc7f  FSTP double ptr [EBP + -0x20]
004cfc82  JMP 0x004cfc19
004cfc84  FLDZ
004cfc86  FCOMP double ptr [EBP + -0x20]
004cfc89  FNSTSW AX
004cfc8b  TEST AH,0x5
004cfc8e  JNP 0x004cfca7
004cfc90  PUSH 0xd41
004cfc95  PUSH 0x6bf384
004cfc9a  PUSH 0x6bf894
004cfc9f  CALL 0x005e9f20
004cfca4  ADD ESP,0xc
004cfca7  MOVSX EAX,word ptr [EBP + 0xc]
004cfcab  SUB EAX,0x1
004cfcae  IMUL EAX,EAX,0xe
004cfcb1  MOV ECX,dword ptr [EBP + -0x28]
004cfcb4  LEA EDX,[ECX + EAX*0x1 + 0xb8]
004cfcbb  MOVSX EAX,word ptr [EBP + 0x10]
004cfcbf  MOVSX ECX,word ptr [EDX + EAX*0x2 + -0x4]
004cfcc4  MOV dword ptr [EBP + -0x3c],ECX
004cfcc7  FILD dword ptr [EBP + -0x3c]
004cfcca  MOV EDX,dword ptr [EBP + -0x28]
004cfccd  MOVSX EAX,word ptr [EDX + 0x10c]
004cfcd4  MOV dword ptr [EBP + -0x40],EAX
004cfcd7  FILD dword ptr [EBP + -0x40]
004cfcda  FADDP
004cfcdc  FDIV double ptr [0x006b4b00]
004cfce2  MOV CX,word ptr [EBP + 0xc]
004cfce6  PUSH ECX
004cfce7  FSTP double ptr [EBP + -0x48]
004cfcea  CALL 0x0048e500
004cfcef  ADD ESP,0x4
004cfcf2  FMUL double ptr [EBP + -0x48]
004cfcf5  FDIV double ptr [EBP + -0x20]
004cfcf8  FSTP double ptr [EBP + -0x10]
004cfcfb  MOV EDX,dword ptr [EBP + -0x28]
004cfcfe  MOV EAX,dword ptr [EDX + 0x428]
004cfd04  MOVSX ECX,word ptr [EBP + 0x8]
004cfd08  IMUL ECX,ECX,0x7
004cfd0b  LEA EDX,[EAX + ECX*0x1 + 0x150]
004cfd12  MOVSX EAX,word ptr [EBP + 0x10]
004cfd16  MOVZX ECX,byte ptr [EDX + EAX*0x1 + -0x2]
004cfd1b  TEST ECX,ECX
004cfd1d  JNZ 0x004cfd26
004cfd1f  FLDZ
004cfd21  FSTP double ptr [EBP + -0x18]
004cfd24  JMP 0x004cfd83
004cfd26  MOV EDX,dword ptr [EBP + -0x28]
004cfd29  MOV EAX,dword ptr [EDX + 0x428]
004cfd2f  MOVSX ECX,word ptr [EBP + 0x8]
004cfd33  IMUL ECX,ECX,0x2a
004cfd36  LEA EDX,[EAX + ECX*0x1 + 0x188]
004cfd3d  MOVSX EAX,word ptr [EBP + 0xc]
004cfd41  SUB EAX,0x1
004cfd44  IMUL EAX,EAX,0x7
004cfd47  ADD EDX,EAX
004cfd49  MOVSX ECX,word ptr [EBP + 0x10]
004cfd4d  MOVZX EDX,byte ptr [EDX + ECX*0x1 + -0x2]
004cfd52  MOV dword ptr [EBP + -0x4c],EDX
004cfd55  FILD dword ptr [EBP + -0x4c]
004cfd58  MOV EAX,dword ptr [EBP + -0x28]
004cfd5b  MOV ECX,dword ptr [EAX + 0x428]
004cfd61  MOVSX EDX,word ptr [EBP + 0x8]
004cfd65  IMUL EDX,EDX,0x7
004cfd68  LEA EAX,[ECX + EDX*0x1 + 0x150]
004cfd6f  MOVSX ECX,word ptr [EBP + 0x10]
004cfd73  MOVZX EDX,byte ptr [EAX + ECX*0x1 + -0x2]
004cfd78  MOV dword ptr [EBP + -0x50],EDX
004cfd7b  FILD dword ptr [EBP + -0x50]
004cfd7e  FDIVP
004cfd80  FSTP double ptr [EBP + -0x18]
004cfd83  MOV EAX,dword ptr [EBP + -0x28]
004cfd86  MOV ECX,dword ptr [EAX + 0x428]
004cfd8c  MOVSX EDX,word ptr [EBP + 0x8]
004cfd90  IMUL EDX,EDX,0x7
004cfd93  LEA EAX,[ECX + EDX*0x1 + 0x150]
004cfd9a  MOVSX ECX,word ptr [EBP + 0x10]
004cfd9e  MOVZX EDX,byte ptr [EAX + ECX*0x1 + -0x2]
004cfda3  MOV dword ptr [EBP + -0x54],EDX
004cfda6  FILD dword ptr [EBP + -0x54]
004cfda9  MOV EAX,dword ptr [EBP + -0x28]
004cfdac  MOVSX ECX,word ptr [EAX + 0x114]
004cfdb3  MOV dword ptr [EBP + -0x58],ECX
004cfdb6  FILD dword ptr [EBP + -0x58]
004cfdb9  FDIVP
004cfdbb  FMUL double ptr [EBP + -0x18]
004cfdbe  FADD double ptr [EBP + -0x10]
004cfdc1  MOV EDX,dword ptr [EBP + -0x28]
004cfdc4  MOV EAX,dword ptr [EDX + 0x428]
004cfdca  MOVSX ECX,word ptr [EBP + 0x8]
004cfdce  IMUL ECX,ECX,0x7
004cfdd1  LEA EDX,[EAX + ECX*0x1 + 0x150]
004cfdd8  MOVSX EAX,word ptr [EBP + 0x10]
004cfddc  MOVZX ECX,byte ptr [EDX + EAX*0x1 + -0x2]
004cfde1  MOV dword ptr [EBP + -0x5c],ECX
004cfde4  FILD dword ptr [EBP + -0x5c]
004cfde7  MOV EDX,dword ptr [EBP + -0x28]
004cfdea  MOVSX EAX,word ptr [EDX + 0x114]
004cfdf1  MOV dword ptr [EBP + -0x60],EAX
004cfdf4  FILD dword ptr [EBP + -0x60]
004cfdf7  FDIVP
004cfdf9  FADD double ptr [0x006b2c48]
004cfdff  FDIVP
004cfe01  FSTP double ptr [EBP + -0x8]
004cfe04  FLD1
004cfe06  FCOMP double ptr [EBP + -0x8]
004cfe09  FNSTSW AX
004cfe0b  TEST AH,0x5
004cfe0e  JP 0x004cfe16
004cfe10  FLD1
004cfe12  JMP 0x004cfe19
004cfe16  FLD double ptr [EBP + -0x8]
004cfe19  POP ESI
004cfe1a  MOV ESP,EBP
004cfe1c  POP EBP
004cfe1d  RET 0xc
