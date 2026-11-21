; FUN_0062ba50  0062ba50
0062ba50  PUSH EBP
0062ba51  MOV EBP,ESP
0062ba53  SUB ESP,0x24
0062ba56  PUSH ESI
0062ba57  MOV dword ptr [EBP + -0x24],ECX
0062ba5a  MOV EAX,dword ptr [EBP + -0x24]
0062ba5d  CMP dword ptr [EAX + 0xc],0x0
0062ba61  JNZ 0x0062ba6a
0062ba63  XOR AL,AL
0062ba65  JMP 0x0062bc49
0062ba6a  PUSH 0x18
0062ba6c  CALL 0x00686d82
0062ba71  ADD ESP,0x4
0062ba74  MOV dword ptr [EBP + -0x18],EAX
0062ba77  MOV ECX,dword ptr [EBP + -0x24]
0062ba7a  MOV EDX,dword ptr [EBP + -0x18]
0062ba7d  MOV dword ptr [ECX + 0x10],EDX
0062ba80  MOV EAX,dword ptr [EBP + -0x24]
0062ba83  MOV ECX,dword ptr [EAX + 0xc]
0062ba86  PUSH ECX
0062ba87  PUSH 0x1
0062ba89  PUSH 0x18
0062ba8b  MOV EDX,dword ptr [EBP + -0x24]
0062ba8e  MOV EAX,dword ptr [EDX + 0x10]
0062ba91  PUSH EAX
0062ba92  CALL dword ptr [0x006b225c]
0062ba98  ADD ESP,0x10
0062ba9b  MOV ECX,dword ptr [EBP + -0x24]
0062ba9e  MOV EDX,dword ptr [ECX + 0x10]
0062baa1  XOR EAX,EAX
0062baa3  CMP dword ptr [EDX],0x1
0062baa6  SETNZ AL
0062baa9  MOV byte ptr [EBP + -0x5],AL
0062baac  MOV ECX,dword ptr [EBP + -0x24]
0062baaf  MOV EDX,dword ptr [ECX + 0x10]
0062bab2  MOV EAX,dword ptr [EDX + 0x8]
0062bab5  MOV dword ptr [EBP + -0x10],EAX
0062bab8  MOVZX ECX,byte ptr [EBP + -0x5]
0062babc  TEST ECX,ECX
0062babe  JZ 0x0062bacc
0062bac0  LEA EDX,[EBP + -0x10]
0062bac3  PUSH EDX
0062bac4  CALL 0x0062ce00
0062bac9  ADD ESP,0x4
0062bacc  CMP dword ptr [EBP + -0x10],0x1
0062bad0  JNZ 0x0062bafa
0062bad2  MOV EAX,dword ptr [EBP + -0x24]
0062bad5  MOV ECX,dword ptr [EAX + 0x10]
0062bad8  MOV dword ptr [EBP + -0x14],ECX
0062badb  MOV EDX,dword ptr [EBP + -0x14]
0062bade  MOVZX EAX,word ptr [EDX]
0062bae1  MOV ECX,dword ptr [EBP + -0x24]
0062bae4  MOV EDX,dword ptr [ECX + 0x10]
0062bae7  MOV dword ptr [EDX],EAX
0062bae9  MOV EAX,dword ptr [EBP + -0x24]
0062baec  MOV ECX,dword ptr [EAX + 0x10]
0062baef  XOR EDX,EDX
0062baf1  CMP dword ptr [ECX],0x1
0062baf4  SETNZ DL
0062baf7  MOV byte ptr [EBP + -0x5],DL
0062bafa  MOVZX EAX,byte ptr [EBP + -0x5]
0062bafe  TEST EAX,EAX
0062bb00  JZ 0x0062bb0a
0062bb02  MOV ECX,dword ptr [EBP + -0x24]
0062bb05  CALL 0x0062bc50
0062bb0a  PUSH 0x0
0062bb0c  MOV ECX,dword ptr [EBP + -0x24]
0062bb0f  MOV EDX,dword ptr [ECX + 0x10]
0062bb12  MOV EAX,dword ptr [EDX + 0x14]
0062bb15  PUSH EAX
0062bb16  MOV ECX,dword ptr [EBP + -0x24]
0062bb19  MOV EDX,dword ptr [ECX + 0xc]
0062bb1c  PUSH EDX
0062bb1d  CALL dword ptr [0x006b230c]
0062bb23  ADD ESP,0xc
0062bb26  MOV EAX,dword ptr [EBP + -0x24]
0062bb29  MOV ECX,dword ptr [EAX + 0x10]
0062bb2c  MOV EDX,dword ptr [ECX + 0x10]
0062bb2f  PUSH EDX
0062bb30  CALL 0x00686d82
0062bb35  ADD ESP,0x4
0062bb38  MOV dword ptr [EBP + -0x1c],EAX
0062bb3b  MOV EAX,dword ptr [EBP + -0x24]
0062bb3e  MOV ECX,dword ptr [EBP + -0x1c]
0062bb41  MOV dword ptr [EAX + 0x14],ECX
0062bb44  MOV EDX,dword ptr [EBP + -0x24]
0062bb47  MOV EAX,dword ptr [EDX + 0xc]
0062bb4a  PUSH EAX
0062bb4b  PUSH 0x1
0062bb4d  MOV ECX,dword ptr [EBP + -0x24]
0062bb50  MOV EDX,dword ptr [ECX + 0x10]
0062bb53  MOV EAX,dword ptr [EDX + 0x10]
0062bb56  PUSH EAX
0062bb57  MOV ECX,dword ptr [EBP + -0x24]
0062bb5a  MOV EDX,dword ptr [ECX + 0x14]
0062bb5d  PUSH EDX
0062bb5e  CALL dword ptr [0x006b225c]
0062bb64  ADD ESP,0x10
0062bb67  MOV EAX,dword ptr [EBP + -0x24]
0062bb6a  MOV ECX,dword ptr [EAX + 0x10]
0062bb6d  CMP dword ptr [ECX + 0x8],0x1
0062bb71  JNZ 0x0062bc37
0062bb77  MOV EDX,dword ptr [EBP + -0x24]
0062bb7a  MOV EAX,dword ptr [EDX + 0x14]
0062bb7d  MOV dword ptr [EBP + -0x4],EAX
0062bb80  MOV ECX,dword ptr [EBP + -0x4]
0062bb83  MOVZX EDX,word ptr [ECX + 0x2]
0062bb87  MOV EAX,dword ptr [EBP + -0x24]
0062bb8a  MOV ECX,dword ptr [EAX + 0x14]
0062bb8d  MOV dword ptr [ECX + 0x4],EDX
0062bb90  MOV EDX,dword ptr [EBP + -0x4]
0062bb93  MOVZX EAX,word ptr [EDX]
0062bb96  MOV ECX,dword ptr [EBP + -0x24]
0062bb99  MOV EDX,dword ptr [ECX + 0x14]
0062bb9c  MOV dword ptr [EDX],EAX
0062bb9e  MOV EAX,dword ptr [EBP + -0x24]
0062bba1  MOV ECX,dword ptr [EAX + 0x14]
0062bba4  MOV EDX,dword ptr [ECX]
0062bba6  SUB EDX,0x1
0062bba9  MOV dword ptr [EBP + -0xc],EDX
0062bbac  JMP 0x0062bbb7
0062bbae  MOV EAX,dword ptr [EBP + -0xc]
0062bbb1  SUB EAX,0x1
0062bbb4  MOV dword ptr [EBP + -0xc],EAX
0062bbb7  CMP dword ptr [EBP + -0xc],-0x1
0062bbbb  JZ 0x0062bc37
0062bbbd  MOV ECX,dword ptr [EBP + -0xc]
0062bbc0  SHL ECX,0x4
0062bbc3  MOV EDX,dword ptr [EBP + -0x24]
0062bbc6  MOV EAX,dword ptr [EDX + 0x14]
0062bbc9  MOV EDX,dword ptr [EBP + -0xc]
0062bbcc  SHL EDX,0x4
0062bbcf  MOV ESI,dword ptr [EBP + -0x4]
0062bbd2  MOV ECX,dword ptr [ESI + ECX*0x1 + 0x10]
0062bbd6  MOV dword ptr [EAX + EDX*0x1 + 0x14],ECX
0062bbda  MOV EDX,dword ptr [EBP + -0xc]
0062bbdd  SHL EDX,0x4
0062bbe0  MOV EAX,dword ptr [EBP + -0x24]
0062bbe3  MOV ECX,dword ptr [EAX + 0x14]
0062bbe6  MOV EAX,dword ptr [EBP + -0xc]
0062bbe9  SHL EAX,0x4
0062bbec  MOV ESI,dword ptr [EBP + -0x4]
0062bbef  MOV EDX,dword ptr [ESI + EDX*0x1 + 0xc]
0062bbf3  MOV dword ptr [ECX + EAX*0x1 + 0x10],EDX
0062bbf7  MOV EAX,dword ptr [EBP + -0xc]
0062bbfa  SHL EAX,0x4
0062bbfd  MOV ECX,dword ptr [EBP + -0x4]
0062bc00  MOVZX EDX,word ptr [ECX + EAX*0x1 + 0x8]
0062bc05  MOV EAX,dword ptr [EBP + -0x24]
0062bc08  MOV ECX,dword ptr [EAX + 0x14]
0062bc0b  MOV EAX,dword ptr [EBP + -0xc]
0062bc0e  SHL EAX,0x4
0062bc11  MOV dword ptr [ECX + EAX*0x1 + 0xc],EDX
0062bc15  MOV ECX,dword ptr [EBP + -0xc]
0062bc18  SHL ECX,0x4
0062bc1b  MOV EDX,dword ptr [EBP + -0x24]
0062bc1e  MOV EAX,dword ptr [EDX + 0x14]
0062bc21  MOV EDX,dword ptr [EBP + -0xc]
0062bc24  SHL EDX,0x4
0062bc27  MOV ESI,dword ptr [EBP + -0x4]
0062bc2a  MOV ECX,dword ptr [ESI + ECX*0x1 + 0x4]
0062bc2e  MOV dword ptr [EAX + EDX*0x1 + 0x8],ECX
0062bc32  JMP 0x0062bbae
0062bc37  MOVZX EDX,byte ptr [EBP + -0x5]
0062bc3b  TEST EDX,EDX
0062bc3d  JZ 0x0062bc47
0062bc3f  MOV ECX,dword ptr [EBP + -0x24]
0062bc42  CALL 0x0062bcc0
0062bc47  MOV AL,0x1
0062bc49  POP ESI
0062bc4a  MOV ESP,EBP
0062bc4c  POP EBP
0062bc4d  RET
