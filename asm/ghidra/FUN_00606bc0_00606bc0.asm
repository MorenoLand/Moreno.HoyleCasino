; FUN_00606bc0  00606bc0
00606bc0  PUSH EBP
00606bc1  MOV EBP,ESP
00606bc3  SUB ESP,0x30
00606bc6  MOV dword ptr [EBP + -0x10],ECX
00606bc9  MOV EAX,dword ptr [EBP + -0x10]
00606bcc  MOV ECX,dword ptr [EBP + 0x8]
00606bcf  MOV dword ptr [EAX + 0x10],ECX
00606bd2  MOV EDX,dword ptr [EBP + -0x10]
00606bd5  MOV EAX,dword ptr [EBP + 0xc]
00606bd8  MOV dword ptr [EDX + 0x14],EAX
00606bdb  MOV ECX,dword ptr [EBP + -0x10]
00606bde  CMP dword ptr [ECX + 0x4],0x0
00606be2  JNZ 0x00606be9
00606be4  JMP 0x00606dd1
00606be9  MOV EDX,dword ptr [EBP + -0x10]
00606bec  MOV byte ptr [EDX + 0xc],0x1
00606bf0  MOV EAX,dword ptr [EBP + -0x10]
00606bf3  MOV ECX,dword ptr [EAX + 0x4]
00606bf6  MOV EDX,dword ptr [EBP + -0x10]
00606bf9  MOV EAX,dword ptr [EDX + 0x4]
00606bfc  MOV EDX,dword ptr [ECX]
00606bfe  MOV ECX,EAX
00606c00  MOV EAX,dword ptr [EDX + 0x4c]
00606c03  CALL EAX
00606c05  MOV dword ptr [EBP + -0x14],EAX
00606c08  FILD dword ptr [EBP + -0x14]
00606c0b  MOV ECX,dword ptr [EBP + -0x10]
00606c0e  FSTP float ptr [ECX + 0x18]
00606c11  MOV EDX,dword ptr [EBP + -0x10]
00606c14  MOV EAX,dword ptr [EDX + 0x4]
00606c17  MOV ECX,dword ptr [EBP + -0x10]
00606c1a  MOV ECX,dword ptr [ECX + 0x4]
00606c1d  MOV EDX,dword ptr [EAX]
00606c1f  MOV EAX,dword ptr [EDX + 0x54]
00606c22  CALL EAX
00606c24  MOV dword ptr [EBP + -0x18],EAX
00606c27  FILD dword ptr [EBP + -0x18]
00606c2a  MOV ECX,dword ptr [EBP + -0x10]
00606c2d  FSTP float ptr [ECX + 0x1c]
00606c30  MOV EDX,dword ptr [EBP + -0x10]
00606c33  FILD dword ptr [EDX + 0x10]
00606c36  MOV EAX,dword ptr [EBP + -0x10]
00606c39  FSUB float ptr [EAX + 0x18]
00606c3c  MOV ECX,dword ptr [EBP + -0x10]
00606c3f  FSTP float ptr [ECX + 0x20]
00606c42  MOV EDX,dword ptr [EBP + -0x10]
00606c45  FILD dword ptr [EDX + 0x14]
00606c48  MOV EAX,dword ptr [EBP + -0x10]
00606c4b  FSUB float ptr [EAX + 0x1c]
00606c4e  MOV ECX,dword ptr [EBP + -0x10]
00606c51  FSTP float ptr [ECX + 0x24]
00606c54  MOV EDX,dword ptr [EBP + -0x10]
00606c57  MOV EAX,dword ptr [EDX + 0x4]
00606c5a  FILD dword ptr [EAX + 0x188]
00606c60  FSTP float ptr [EBP + -0xc]
00606c63  FLD float ptr [EBP + -0xc]
00606c66  FCOMP double ptr [0x006b2c50]
00606c6c  FNSTSW AX
00606c6e  TEST AH,0x44
00606c71  JP 0x00606c7e
00606c73  FLD float ptr [0x006d7dfc]
00606c79  FSTP float ptr [EBP + -0xc]
00606c7c  JMP 0x00606ca4
00606c7e  FLD float ptr [EBP + -0xc]
00606c81  FCOMP double ptr [0x006b2c50]
00606c87  FNSTSW AX
00606c89  TEST AH,0x5
00606c8c  JP 0x00606c98
00606c8e  FLD float ptr [EBP + -0xc]
00606c91  FCHS
00606c93  FSTP float ptr [EBP + -0x1c]
00606c96  JMP 0x00606c9e
00606c98  FLD float ptr [EBP + -0xc]
00606c9b  FSTP float ptr [EBP + -0x1c]
00606c9e  FLD float ptr [EBP + -0x1c]
00606ca1  FSTP float ptr [EBP + -0xc]
00606ca4  MOV ECX,dword ptr [EBP + -0x10]
00606ca7  FLD float ptr [ECX + 0x20]
00606caa  FCOMP double ptr [0x006b2c50]
00606cb0  FNSTSW AX
00606cb2  TEST AH,0x5
00606cb5  JP 0x00606cc4
00606cb7  MOV EDX,dword ptr [EBP + -0x10]
00606cba  FLD float ptr [EDX + 0x20]
00606cbd  FCHS
00606cbf  FSTP float ptr [EBP + -0x20]
00606cc2  JMP 0x00606ccd
00606cc4  MOV EAX,dword ptr [EBP + -0x10]
00606cc7  FLD float ptr [EAX + 0x20]
00606cca  FSTP float ptr [EBP + -0x20]
00606ccd  MOV ECX,dword ptr [EBP + -0x10]
00606cd0  FLD float ptr [ECX + 0x24]
00606cd3  FCOMP double ptr [0x006b2c50]
00606cd9  FNSTSW AX
00606cdb  TEST AH,0x5
00606cde  JP 0x00606ced
00606ce0  MOV EDX,dword ptr [EBP + -0x10]
00606ce3  FLD float ptr [EDX + 0x24]
00606ce6  FCHS
00606ce8  FSTP float ptr [EBP + -0x24]
00606ceb  JMP 0x00606cf6
00606ced  MOV EAX,dword ptr [EBP + -0x10]
00606cf0  FLD float ptr [EAX + 0x24]
00606cf3  FSTP float ptr [EBP + -0x24]
00606cf6  FLD float ptr [EBP + -0x20]
00606cf9  FLD float ptr [EBP + -0x24]
00606cfc  FCOMPP
00606cfe  FNSTSW AX
00606d00  TEST AH,0x41
00606d03  JNZ 0x00606d36
00606d05  MOV ECX,dword ptr [EBP + -0x10]
00606d08  FLD float ptr [ECX + 0x24]
00606d0b  FCOMP double ptr [0x006b2c50]
00606d11  FNSTSW AX
00606d13  TEST AH,0x5
00606d16  JP 0x00606d25
00606d18  MOV EDX,dword ptr [EBP + -0x10]
00606d1b  FLD float ptr [EDX + 0x24]
00606d1e  FCHS
00606d20  FSTP float ptr [EBP + -0x28]
00606d23  JMP 0x00606d2e
00606d25  MOV EAX,dword ptr [EBP + -0x10]
00606d28  FLD float ptr [EAX + 0x24]
00606d2b  FSTP float ptr [EBP + -0x28]
00606d2e  FLD float ptr [EBP + -0x28]
00606d31  FSTP float ptr [EBP + -0x2c]
00606d34  JMP 0x00606d65
00606d36  MOV ECX,dword ptr [EBP + -0x10]
00606d39  FLD float ptr [ECX + 0x20]
00606d3c  FCOMP double ptr [0x006b2c50]
00606d42  FNSTSW AX
00606d44  TEST AH,0x5
00606d47  JP 0x00606d56
00606d49  MOV EDX,dword ptr [EBP + -0x10]
00606d4c  FLD float ptr [EDX + 0x20]
00606d4f  FCHS
00606d51  FSTP float ptr [EBP + -0x30]
00606d54  JMP 0x00606d5f
00606d56  MOV EAX,dword ptr [EBP + -0x10]
00606d59  FLD float ptr [EAX + 0x20]
00606d5c  FSTP float ptr [EBP + -0x30]
00606d5f  FLD float ptr [EBP + -0x30]
00606d62  FSTP float ptr [EBP + -0x2c]
00606d65  FLD float ptr [EBP + -0x2c]
00606d68  FDIV float ptr [EBP + -0xc]
00606d6b  FSTP float ptr [EBP + -0x8]
00606d6e  FLD float ptr [EBP + -0x8]
00606d71  FADD double ptr [0x006b2c38]
00606d77  CALL 0x00686cc0
00606d7c  MOV dword ptr [EBP + -0x4],EAX
00606d7f  CMP dword ptr [EBP + -0x4],0x0
00606d83  JNZ 0x00606d8c
00606d85  MOV dword ptr [EBP + -0x4],0x1
00606d8c  MOV ECX,dword ptr [EBP + -0x10]
00606d8f  MOV EDX,dword ptr [ECX + 0x4]
00606d92  CMP dword ptr [EDX + 0x184],0x0
00606d99  JNZ 0x00606da2
00606d9b  MOV dword ptr [EBP + -0x4],0x1
00606da2  FILD dword ptr [EBP + -0x4]
00606da5  MOV EAX,dword ptr [EBP + -0x10]
00606da8  FDIVR float ptr [EAX + 0x20]
00606dab  MOV ECX,dword ptr [EBP + -0x10]
00606dae  FSTP float ptr [ECX + 0x20]
00606db1  FILD dword ptr [EBP + -0x4]
00606db4  MOV EDX,dword ptr [EBP + -0x10]
00606db7  FDIVR float ptr [EDX + 0x24]
00606dba  MOV EAX,dword ptr [EBP + -0x10]
00606dbd  FSTP float ptr [EAX + 0x24]
00606dc0  MOV ECX,dword ptr [0x015e55e8]
00606dc6  CALL 0x005f3e50
00606dcb  MOV ECX,dword ptr [EBP + -0x10]
00606dce  MOV dword ptr [ECX + 0x28],EAX
00606dd1  MOV ESP,EBP
00606dd3  POP EBP
00606dd4  RET 0x8
