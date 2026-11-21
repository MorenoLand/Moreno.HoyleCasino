; FUN_004b7b20  004b7b20
004b7b20  PUSH EBP
004b7b21  MOV EBP,ESP
004b7b23  SUB ESP,0x3c
004b7b26  PUSH ESI
004b7b27  MOV ECX,dword ptr [0x00791364]
004b7b2d  CALL 0x0047e420
004b7b32  MOV dword ptr [EBP + -0x4],EAX
004b7b35  MOV EAX,dword ptr [EBP + -0x4]
004b7b38  MOVZX ECX,byte ptr [EAX + 0x791868]
004b7b3f  TEST ECX,ECX
004b7b41  JNZ 0x004b7b68
004b7b43  MOV EDX,dword ptr [EBP + -0x4]
004b7b46  MOVZX EAX,byte ptr [EDX + 0x791ab8]
004b7b4d  TEST EAX,EAX
004b7b4f  JNZ 0x004b7b68
004b7b51  PUSH 0x1b24
004b7b56  PUSH 0x6be4fc
004b7b5b  PUSH 0x6be830
004b7b60  CALL 0x005e9f20
004b7b65  ADD ESP,0xc
004b7b68  MOV EDX,dword ptr [EBP + -0x4]
004b7b6b  MOVSX EAX,word ptr [EDX*0x2 + 0x791d80]
004b7b73  CMP EAX,0x5
004b7b76  JZ 0x004b7cea
004b7b7c  MOV ECX,dword ptr [0x00791364]
004b7b82  CALL 0x0047e3b0
004b7b87  MOV [0x00791890],EAX
004b7b8c  PUSH 0x5
004b7b8e  CALL 0x004b1060
004b7b93  ADD ESP,0x4
004b7b96  MOV ECX,dword ptr [0x00791364]
004b7b9c  ADD ECX,0x38
004b7b9f  CALL 0x004f91a0
004b7ba4  MOVSX ECX,AX
004b7ba7  MOV dword ptr [EBP + -0x34],ECX
004b7baa  FILD dword ptr [EBP + -0x34]
004b7bad  FLD1
004b7baf  FDIVRP
004b7bb1  FLD1
004b7bb3  FSUBRP
004b7bb5  FSTP double ptr [EBP + -0x10]
004b7bb8  PUSH 0x14
004b7bba  CALL 0x0062fbf0
004b7bbf  ADD ESP,0x4
004b7bc2  MOV ESI,EAX
004b7bc4  PUSH 0x14
004b7bc6  CALL 0x0062fbf0
004b7bcb  ADD ESP,0x4
004b7bce  SUB ESI,EAX
004b7bd0  MOV dword ptr [EBP + -0x38],ESI
004b7bd3  FILD dword ptr [EBP + -0x38]
004b7bd6  FMUL double ptr [0x006bc270]
004b7bdc  FLD1
004b7bde  FADDP
004b7be0  FMUL double ptr [EBP + -0x10]
004b7be3  FSTP double ptr [EBP + -0x10]
004b7be6  MOV ECX,dword ptr [0x00791890]
004b7bec  CALL 0x004f1d60
004b7bf1  MOVSX EDX,AX
004b7bf4  MOV dword ptr [EBP + -0x3c],EDX
004b7bf7  FILD dword ptr [EBP + -0x3c]
004b7bfa  FDIV double ptr [0x006b4b00]
004b7c00  FDIVR double ptr [EBP + -0x10]
004b7c03  FSTP double ptr [EBP + -0x10]
004b7c06  MOV EAX,dword ptr [EBP + -0x4]
004b7c09  FLD double ptr [EAX*0x8 + 0x7916e8]
004b7c10  FSTP double ptr [EBP + -0x30]
004b7c13  MOV ECX,dword ptr [EBP + -0x4]
004b7c16  FLD double ptr [EBP + -0x30]
004b7c19  FMUL double ptr [ECX*0x8 + 0x791958]
004b7c20  FSTP double ptr [EBP + -0x18]
004b7c23  MOV EDX,dword ptr [EBP + -0x4]
004b7c26  FLD double ptr [EBP + -0x30]
004b7c29  FMUL double ptr [EDX*0x8 + 0x7918f8]
004b7c30  FSTP double ptr [EBP + -0x20]
004b7c33  MOV EAX,dword ptr [EBP + -0x4]
004b7c36  FLD double ptr [EBP + -0x30]
004b7c39  FMUL double ptr [EAX*0x8 + 0x7917a8]
004b7c40  FSTP double ptr [EBP + -0x28]
004b7c43  FLD double ptr [EBP + -0x10]
004b7c46  FCOMP double ptr [EBP + -0x18]
004b7c49  FNSTSW AX
004b7c4b  TEST AH,0x5
004b7c4e  JP 0x004b7ce0
004b7c54  MOV ECX,dword ptr [EBP + 0x8]
004b7c57  MOV dword ptr [ECX],0x3
004b7c5d  MOV EDX,dword ptr [EBP + -0x4]
004b7c60  MOV EAX,dword ptr [EBP + -0x4]
004b7c63  FLD double ptr [EAX*0x8 + 0x7917a8]
004b7c6a  FCOMP double ptr [EDX*0x8 + 0x7918f8]
004b7c71  FNSTSW AX
004b7c73  TEST AH,0x5
004b7c76  JP 0x004b7cad
004b7c78  MOV ECX,dword ptr [EBP + -0x4]
004b7c7b  MOVZX EDX,byte ptr [ECX + 0x791868]
004b7c82  TEST EDX,EDX
004b7c84  JZ 0x004b7c93
004b7c86  MOV EAX,dword ptr [EBP + 0xc]
004b7c89  MOV byte ptr [EAX],0x0
004b7c8c  JMP 0x004b7d87
004b7c93  FLD double ptr [EBP + -0x10]
004b7c96  FCOMP double ptr [EBP + -0x28]
004b7c99  FNSTSW AX
004b7c9b  TEST AH,0x5
004b7c9e  JP 0x004b7cab
004b7ca0  MOV ECX,dword ptr [EBP + 0xc]
004b7ca3  MOV byte ptr [ECX],0x1
004b7ca6  JMP 0x004b7d87
004b7cab  JMP 0x004b7ce0
004b7cad  MOV EDX,dword ptr [EBP + -0x4]
004b7cb0  MOVZX EAX,byte ptr [EDX + 0x791ab8]
004b7cb7  TEST EAX,EAX
004b7cb9  JZ 0x004b7cc8
004b7cbb  MOV ECX,dword ptr [EBP + 0xc]
004b7cbe  MOV byte ptr [ECX],0x1
004b7cc1  JMP 0x004b7d87
004b7cc8  FLD double ptr [EBP + -0x10]
004b7ccb  FCOMP double ptr [EBP + -0x20]
004b7cce  FNSTSW AX
004b7cd0  TEST AH,0x5
004b7cd3  JP 0x004b7ce0
004b7cd5  MOV EDX,dword ptr [EBP + 0xc]
004b7cd8  MOV byte ptr [EDX],0x0
004b7cdb  JMP 0x004b7d87
004b7ce0  MOV EAX,dword ptr [EBP + -0x4]
004b7ce3  MOV byte ptr [EAX + 0x791580],0x0
004b7cea  MOV ECX,dword ptr [EBP + -0x4]
004b7ced  MOVZX EDX,byte ptr [ECX + 0x791580]
004b7cf4  TEST EDX,EDX
004b7cf6  JZ 0x004b7d58
004b7cf8  MOV EAX,dword ptr [EBP + 0x8]
004b7cfb  MOV dword ptr [EAX],0x3
004b7d01  MOV ECX,dword ptr [EBP + -0x4]
004b7d04  MOV EDX,dword ptr [EBP + -0x4]
004b7d07  FLD double ptr [EDX*0x8 + 0x7917a8]
004b7d0e  FCOMP double ptr [ECX*0x8 + 0x7918f8]
004b7d15  FNSTSW AX
004b7d17  TEST AH,0x5
004b7d1a  JP 0x004b7d3a
004b7d1c  MOV EAX,dword ptr [EBP + -0x4]
004b7d1f  MOVZX ECX,byte ptr [EAX + 0x791868]
004b7d26  TEST ECX,ECX
004b7d28  JZ 0x004b7d32
004b7d2a  MOV EDX,dword ptr [EBP + 0xc]
004b7d2d  MOV byte ptr [EDX],0x0
004b7d30  JMP 0x004b7d38
004b7d32  MOV EAX,dword ptr [EBP + 0xc]
004b7d35  MOV byte ptr [EAX],0x1
004b7d38  JMP 0x004b7d56
004b7d3a  MOV ECX,dword ptr [EBP + -0x4]
004b7d3d  MOVZX EDX,byte ptr [ECX + 0x791ab8]
004b7d44  TEST EDX,EDX
004b7d46  JZ 0x004b7d50
004b7d48  MOV EAX,dword ptr [EBP + 0xc]
004b7d4b  MOV byte ptr [EAX],0x1
004b7d4e  JMP 0x004b7d56
004b7d50  MOV ECX,dword ptr [EBP + 0xc]
004b7d53  MOV byte ptr [ECX],0x0
004b7d56  JMP 0x004b7d87
004b7d58  MOV EDX,dword ptr [EBP + -0x4]
004b7d5b  MOV EAX,dword ptr [EBP + -0x4]
004b7d5e  FLD double ptr [EAX*0x8 + 0x791958]
004b7d65  FCOMP double ptr [EDX*0x8 + 0x7916e8]
004b7d6c  FNSTSW AX
004b7d6e  TEST AH,0x5
004b7d71  JP 0x004b7d7e
004b7d73  MOV ECX,dword ptr [EBP + 0x8]
004b7d76  MOV dword ptr [ECX],0x1
004b7d7c  JMP 0x004b7d87
004b7d7e  MOV EDX,dword ptr [EBP + 0x8]
004b7d81  MOV dword ptr [EDX],0x2
004b7d87  POP ESI
004b7d88  MOV ESP,EBP
004b7d8a  POP EBP
004b7d8b  RET
