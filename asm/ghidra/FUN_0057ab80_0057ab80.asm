; FUN_0057ab80  0057ab80
0057ab80  PUSH EBP
0057ab81  MOV EBP,ESP
0057ab83  PUSH -0x1
0057ab85  PUSH 0x6a6724
0057ab8a  MOV EAX,FS:[0x0]
0057ab90  PUSH EAX
0057ab91  SUB ESP,0x20
0057ab94  PUSH ESI
0057ab95  PUSH EDI
0057ab96  MOV EAX,[0x00781870]
0057ab9b  XOR EAX,EBP
0057ab9d  PUSH EAX
0057ab9e  LEA EAX,[EBP + -0xc]
0057aba1  MOV FS:[0x0],EAX
0057aba7  MOV dword ptr [EBP + -0x24],ECX
0057abaa  MOV ECX,dword ptr [EBP + -0x24]
0057abad  CALL 0x0057ae30
0057abb2  MOV EAX,dword ptr [EBP + -0x24]
0057abb5  MOV ECX,dword ptr [EBP + 0xc]
0057abb8  MOV EDX,dword ptr [ECX]
0057abba  MOV dword ptr [EAX + 0x1c0],EDX
0057abc0  MOV EAX,dword ptr [EBP + -0x24]
0057abc3  MOV ECX,dword ptr [EBP + 0xc]
0057abc6  MOV DL,byte ptr [ECX + 0x4]
0057abc9  MOV byte ptr [EAX + 0x1c4],DL
0057abcf  MOV EAX,dword ptr [EBP + 0xc]
0057abd2  ADD EAX,0x5
0057abd5  PUSH EAX
0057abd6  MOV ECX,dword ptr [EBP + -0x24]
0057abd9  ADD ECX,0x1c5
0057abdf  PUSH ECX
0057abe0  CALL 0x00686d8e
0057abe5  ADD ESP,0x8
0057abe8  XOR ECX,ECX
0057abea  MOV EAX,dword ptr [EBP + 0x8]
0057abed  MOV EDX,0x224
0057abf2  MUL EDX
0057abf4  SETO CL
0057abf7  NEG ECX
0057abf9  OR ECX,EAX
0057abfb  PUSH ECX
0057abfc  CALL 0x00686d82
0057ac01  ADD ESP,0x4
0057ac04  MOV dword ptr [EBP + -0x14],EAX
0057ac07  MOV EAX,dword ptr [EBP + -0x24]
0057ac0a  MOV ECX,dword ptr [EBP + -0x14]
0057ac0d  MOV dword ptr [EAX + 0x19d0],ECX
0057ac13  MOV EDX,dword ptr [EBP + -0x24]
0057ac16  MOV EAX,dword ptr [EBP + 0x8]
0057ac19  MOV dword ptr [EDX + 0x19d4],EAX
0057ac1f  XOR ECX,ECX
0057ac21  MOV EAX,dword ptr [EBP + 0x8]
0057ac24  MOV EDX,0x4
0057ac29  MUL EDX
0057ac2b  SETO CL
0057ac2e  NEG ECX
0057ac30  OR ECX,EAX
0057ac32  PUSH ECX
0057ac33  CALL 0x00686d82
0057ac38  ADD ESP,0x4
0057ac3b  MOV dword ptr [EBP + -0x18],EAX
0057ac3e  MOV EAX,dword ptr [EBP + -0x24]
0057ac41  MOV ECX,dword ptr [EBP + -0x18]
0057ac44  MOV dword ptr [EAX + 0x19d8],ECX
0057ac4a  MOV EDX,dword ptr [EBP + -0x24]
0057ac4d  MOV EAX,dword ptr [EBP + 0x8]
0057ac50  MOV dword ptr [EDX + 0x19dc],EAX
0057ac56  MOV dword ptr [EBP + -0x10],0x0
0057ac5d  JMP 0x0057ac68
0057ac5f  MOV ECX,dword ptr [EBP + -0x10]
0057ac62  ADD ECX,0x1
0057ac65  MOV dword ptr [EBP + -0x10],ECX
0057ac68  MOV EDX,dword ptr [EBP + -0x10]
0057ac6b  CMP EDX,dword ptr [EBP + 0x8]
0057ac6e  JGE 0x0057ae0c
0057ac74  MOV EAX,dword ptr [EBP + -0x10]
0057ac77  IMUL EAX,EAX,0x218
0057ac7d  MOV ECX,dword ptr [EBP + 0xc]
0057ac80  LEA ESI,[ECX + EAX*0x1 + 0x108]
0057ac87  MOV EDX,dword ptr [EBP + -0x10]
0057ac8a  IMUL EDX,EDX,0x224
0057ac90  MOV EAX,dword ptr [EBP + -0x24]
0057ac93  MOV EDI,dword ptr [EAX + 0x19d0]
0057ac99  ADD EDI,EDX
0057ac9b  MOV ECX,0x86
0057aca0  MOVSD.REP ES:EDI,ESI
0057aca2  MOV ECX,dword ptr [EBP + -0x10]
0057aca5  IMUL ECX,ECX,0x224
0057acab  MOV EDX,dword ptr [EBP + -0x24]
0057acae  MOV EAX,dword ptr [EDX + 0x19d0]
0057acb4  MOV byte ptr [EAX + ECX*0x1 + 0x218],0x0
0057acbc  MOV ECX,dword ptr [EBP + -0x10]
0057acbf  IMUL ECX,ECX,0x224
0057acc5  MOV EDX,dword ptr [EBP + -0x24]
0057acc8  MOV EAX,dword ptr [EDX + 0x19d0]
0057acce  MOV byte ptr [EAX + ECX*0x1 + 0x219],0x0
0057acd6  MOV ECX,dword ptr [EBP + -0x10]
0057acd9  IMUL ECX,ECX,0x224
0057acdf  MOV EDX,dword ptr [EBP + -0x24]
0057ace2  MOV EAX,dword ptr [EDX + 0x19d0]
0057ace8  MOV dword ptr [EAX + ECX*0x1 + 0x21c],0x0
0057acf3  MOV ECX,dword ptr [EBP + -0x10]
0057acf6  IMUL ECX,ECX,0x224
0057acfc  MOV EDX,dword ptr [EBP + -0x24]
0057acff  MOV EAX,dword ptr [EDX + 0x19d0]
0057ad05  MOV dword ptr [EAX + ECX*0x1 + 0x220],0x0
0057ad10  PUSH 0x1d8
0057ad15  CALL 0x00686d82
0057ad1a  ADD ESP,0x4
0057ad1d  MOV dword ptr [EBP + -0x20],EAX
0057ad20  MOV dword ptr [EBP + -0x4],0x0
0057ad27  CMP dword ptr [EBP + -0x20],0x0
0057ad2b  JZ 0x0057ad3e
0057ad2d  MOV ECX,dword ptr [EBP + -0x10]
0057ad30  PUSH ECX
0057ad31  MOV ECX,dword ptr [EBP + -0x20]
0057ad34  CALL 0x0057c260
0057ad39  MOV dword ptr [EBP + -0x28],EAX
0057ad3c  JMP 0x0057ad45
0057ad3e  MOV dword ptr [EBP + -0x28],0x0
0057ad45  MOV EDX,dword ptr [EBP + -0x28]
0057ad48  MOV dword ptr [EBP + -0x1c],EDX
0057ad4b  MOV dword ptr [EBP + -0x4],0xffffffff
0057ad52  MOV EAX,dword ptr [EBP + -0x24]
0057ad55  MOV ECX,dword ptr [EAX + 0x19d8]
0057ad5b  MOV EDX,dword ptr [EBP + -0x10]
0057ad5e  MOV EAX,dword ptr [EBP + -0x1c]
0057ad61  MOV dword ptr [ECX + EDX*0x4],EAX
0057ad64  MOV ECX,dword ptr [EBP + -0x24]
0057ad67  MOV EDX,dword ptr [ECX + 0x19d8]
0057ad6d  MOV EAX,dword ptr [EBP + -0x10]
0057ad70  MOV ECX,dword ptr [EDX + EAX*0x4]
0057ad73  MOV EDX,dword ptr [EBP + -0x24]
0057ad76  MOV dword ptr [ECX + 0x4],EDX
0057ad79  CMP dword ptr [EBP + -0x10],0x2
0057ad7d  JL 0x0057ad90
0057ad7f  MOV EAX,dword ptr [EBP + -0x10]
0057ad82  SUB EAX,0x1
0057ad85  IMUL EAX,EAX,0xf
0057ad88  ADD EAX,0x3c
0057ad8b  MOV dword ptr [EBP + -0x2c],EAX
0057ad8e  JMP 0x0057ad99
0057ad90  MOV ECX,dword ptr [EBP + -0x10]
0057ad93  IMUL ECX,ECX,0xf
0057ad96  MOV dword ptr [EBP + -0x2c],ECX
0057ad99  PUSH -0x1
0057ad9b  PUSH 0x11
0057ad9d  PUSH 0x1f5
0057ada2  MOV EDX,dword ptr [EBP + -0x2c]
0057ada5  ADD EDX,0x44
0057ada8  PUSH EDX
0057ada9  XOR EAX,EAX
0057adab  CMP dword ptr [EBP + -0x10],0x2
0057adaf  SETGE AL
0057adb2  SUB EAX,0x1
0057adb5  AND EAX,0xfffffff6
0057adb8  ADD EAX,0x19
0057adbb  PUSH EAX
0057adbc  PUSH 0xf
0057adbe  MOV ECX,dword ptr [EBP + -0x24]
0057adc1  CALL 0x005f8550
0057adc6  XOR ECX,ECX
0057adc8  CMP dword ptr [EBP + -0x10],0x2
0057adcc  SETGE CL
0057adcf  SUB ECX,0x1
0057add2  AND ECX,0xfffffff6
0057add5  ADD ECX,0x23
0057add8  SUB EAX,ECX
0057adda  PUSH EAX
0057addb  XOR EDX,EDX
0057addd  CMP dword ptr [EBP + -0x10],0x1
0057ade1  SETG DL
0057ade4  SUB EDX,0x1
0057ade7  AND EDX,0xffffffc8
0057adea  ADD EDX,0x67
0057aded  PUSH EDX
0057adee  PUSH 0x6b27f8
0057adf3  MOV EAX,dword ptr [EBP + -0x24]
0057adf6  MOV ECX,dword ptr [EAX + 0x19d8]
0057adfc  MOV EDX,dword ptr [EBP + -0x10]
0057adff  MOV ECX,dword ptr [ECX + EDX*0x4]
0057ae02  CALL 0x005ec8f0
0057ae07  JMP 0x0057ac5f
0057ae0c  MOV ECX,dword ptr [EBP + -0x24]
0057ae0f  CALL 0x0057b050
0057ae14  MOV ECX,dword ptr [EBP + -0xc]
0057ae17  MOV dword ptr FS:[0x0],ECX
0057ae1e  POP ECX
0057ae1f  POP EDI
0057ae20  POP ESI
0057ae21  MOV ESP,EBP
0057ae23  POP EBP
0057ae24  RET 0x8
