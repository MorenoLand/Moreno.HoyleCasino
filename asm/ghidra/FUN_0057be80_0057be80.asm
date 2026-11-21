; FUN_0057be80  0057be80
0057be80  PUSH EBP
0057be81  MOV EBP,ESP
0057be83  SUB ESP,0x14
0057be86  MOV dword ptr [EBP + -0x14],ECX
0057be89  MOV EAX,dword ptr [EBP + -0x14]
0057be8c  MOV ECX,dword ptr [EBP + 0x8]
0057be8f  CMP ECX,dword ptr [EAX + 0x19d4]
0057be95  JL 0x0057be9c
0057be97  JMP 0x0057c09c
0057be9c  CMP dword ptr [EBP + 0xc],0x0
0057bea0  JZ 0x0057bf8e
0057bea6  MOV EDX,dword ptr [EBP + 0xc]
0057bea9  MOVSX EAX,byte ptr [EDX]
0057beac  TEST EAX,EAX
0057beae  JZ 0x0057bf8e
0057beb4  MOV ECX,dword ptr [EBP + 0x8]
0057beb7  IMUL ECX,ECX,0x224
0057bebd  MOV EDX,dword ptr [EBP + -0x14]
0057bec0  MOV EAX,dword ptr [EDX + 0x19d0]
0057bec6  MOVZX ECX,byte ptr [EAX + ECX*0x1 + 0x218]
0057bece  TEST ECX,ECX
0057bed0  JZ 0x0057bf17
0057bed2  MOV EDX,dword ptr [EBP + 0x8]
0057bed5  IMUL EDX,EDX,0x224
0057bedb  MOV EAX,dword ptr [EBP + -0x14]
0057bede  MOV ECX,dword ptr [EAX + 0x19d0]
0057bee4  MOV EDX,dword ptr [ECX + EDX*0x1 + 0x21c]
0057beeb  MOV dword ptr [EBP + -0x4],EDX
0057beee  MOV EAX,dword ptr [EBP + -0x4]
0057bef1  PUSH EAX
0057bef2  CALL 0x00686cae
0057bef7  ADD ESP,0x4
0057befa  MOV ECX,dword ptr [EBP + 0x8]
0057befd  IMUL ECX,ECX,0x224
0057bf03  MOV EDX,dword ptr [EBP + -0x14]
0057bf06  MOV EAX,dword ptr [EDX + 0x19d0]
0057bf0c  MOV dword ptr [EAX + ECX*0x1 + 0x21c],0x0
0057bf17  MOV ECX,dword ptr [EBP + 0xc]
0057bf1a  PUSH ECX
0057bf1b  CALL 0x00686ecc
0057bf20  ADD ESP,0x4
0057bf23  ADD EAX,0x1
0057bf26  PUSH EAX
0057bf27  CALL 0x00686d82
0057bf2c  ADD ESP,0x4
0057bf2f  MOV dword ptr [EBP + -0x8],EAX
0057bf32  MOV EDX,dword ptr [EBP + 0x8]
0057bf35  IMUL EDX,EDX,0x224
0057bf3b  MOV EAX,dword ptr [EBP + -0x14]
0057bf3e  MOV ECX,dword ptr [EAX + 0x19d0]
0057bf44  MOV EAX,dword ptr [EBP + -0x8]
0057bf47  MOV dword ptr [ECX + EDX*0x1 + 0x21c],EAX
0057bf4e  MOV ECX,dword ptr [EBP + 0xc]
0057bf51  PUSH ECX
0057bf52  MOV EDX,dword ptr [EBP + 0x8]
0057bf55  IMUL EDX,EDX,0x224
0057bf5b  MOV EAX,dword ptr [EBP + -0x14]
0057bf5e  MOV ECX,dword ptr [EAX + 0x19d0]
0057bf64  MOV EDX,dword ptr [ECX + EDX*0x1 + 0x21c]
0057bf6b  PUSH EDX
0057bf6c  CALL 0x00686d8e
0057bf71  ADD ESP,0x8
0057bf74  MOV EAX,dword ptr [EBP + 0x8]
0057bf77  IMUL EAX,EAX,0x224
0057bf7d  MOV ECX,dword ptr [EBP + -0x14]
0057bf80  MOV EDX,dword ptr [ECX + 0x19d0]
0057bf86  MOV byte ptr [EDX + EAX*0x1 + 0x218],0x1
0057bf8e  CMP dword ptr [EBP + 0x10],0x0
0057bf92  JZ 0x0057c080
0057bf98  MOV EAX,dword ptr [EBP + 0x10]
0057bf9b  MOVSX ECX,byte ptr [EAX]
0057bf9e  TEST ECX,ECX
0057bfa0  JZ 0x0057c080
0057bfa6  MOV EDX,dword ptr [EBP + 0x8]
0057bfa9  IMUL EDX,EDX,0x224
0057bfaf  MOV EAX,dword ptr [EBP + -0x14]
0057bfb2  MOV ECX,dword ptr [EAX + 0x19d0]
0057bfb8  MOVZX EDX,byte ptr [ECX + EDX*0x1 + 0x219]
0057bfc0  TEST EDX,EDX
0057bfc2  JZ 0x0057c009
0057bfc4  MOV EAX,dword ptr [EBP + 0x8]
0057bfc7  IMUL EAX,EAX,0x224
0057bfcd  MOV ECX,dword ptr [EBP + -0x14]
0057bfd0  MOV EDX,dword ptr [ECX + 0x19d0]
0057bfd6  MOV EAX,dword ptr [EDX + EAX*0x1 + 0x220]
0057bfdd  MOV dword ptr [EBP + -0xc],EAX
0057bfe0  MOV ECX,dword ptr [EBP + -0xc]
0057bfe3  PUSH ECX
0057bfe4  CALL 0x00686cae
0057bfe9  ADD ESP,0x4
0057bfec  MOV EDX,dword ptr [EBP + 0x8]
0057bfef  IMUL EDX,EDX,0x224
0057bff5  MOV EAX,dword ptr [EBP + -0x14]
0057bff8  MOV ECX,dword ptr [EAX + 0x19d0]
0057bffe  MOV dword ptr [ECX + EDX*0x1 + 0x220],0x0
0057c009  MOV EDX,dword ptr [EBP + 0x10]
0057c00c  PUSH EDX
0057c00d  CALL 0x00686ecc
0057c012  ADD ESP,0x4
0057c015  ADD EAX,0x1
0057c018  PUSH EAX
0057c019  CALL 0x00686d82
0057c01e  ADD ESP,0x4
0057c021  MOV dword ptr [EBP + -0x10],EAX
0057c024  MOV EAX,dword ptr [EBP + 0x8]
0057c027  IMUL EAX,EAX,0x224
0057c02d  MOV ECX,dword ptr [EBP + -0x14]
0057c030  MOV EDX,dword ptr [ECX + 0x19d0]
0057c036  MOV ECX,dword ptr [EBP + -0x10]
0057c039  MOV dword ptr [EDX + EAX*0x1 + 0x220],ECX
0057c040  MOV EDX,dword ptr [EBP + 0x10]
0057c043  PUSH EDX
0057c044  MOV EAX,dword ptr [EBP + 0x8]
0057c047  IMUL EAX,EAX,0x224
0057c04d  MOV ECX,dword ptr [EBP + -0x14]
0057c050  MOV EDX,dword ptr [ECX + 0x19d0]
0057c056  MOV EAX,dword ptr [EDX + EAX*0x1 + 0x220]
0057c05d  PUSH EAX
0057c05e  CALL 0x00686d8e
0057c063  ADD ESP,0x8
0057c066  MOV ECX,dword ptr [EBP + 0x8]
0057c069  IMUL ECX,ECX,0x224
0057c06f  MOV EDX,dword ptr [EBP + -0x14]
0057c072  MOV EAX,dword ptr [EDX + 0x19d0]
0057c078  MOV byte ptr [EAX + ECX*0x1 + 0x219],0x1
0057c080  PUSH -0x1
0057c082  MOV ECX,dword ptr [0x007947e0]
0057c088  CALL 0x005df700
0057c08d  MOVZX ECX,AL
0057c090  TEST ECX,ECX
0057c092  JZ 0x0057c09c
0057c094  MOV ECX,dword ptr [EBP + -0x14]
0057c097  CALL 0x005f85d0
0057c09c  MOV ESP,EBP
0057c09e  POP EBP
0057c09f  RET 0xc
