; FUN_0044da90  0044da90
0044da90  PUSH EBP
0044da91  MOV EBP,ESP
0044da93  SUB ESP,0x20
0044da96  MOV EAX,[0x00781870]
0044da9b  XOR EAX,EBP
0044da9d  MOV dword ptr [EBP + -0x10],EAX
0044daa0  MOV dword ptr [EBP + -0x20],ECX
0044daa3  PUSH 0x0
0044daa5  MOV EAX,dword ptr [EBP + 0x8]
0044daa8  PUSH EAX
0044daa9  MOV ECX,dword ptr [EBP + -0x20]
0044daac  CALL 0x0044ce00
0044dab1  PUSH EAX
0044dab2  MOV ECX,dword ptr [EBP + 0x8]
0044dab5  IMUL ECX,ECX,0xa
0044dab8  MOV EDX,dword ptr [EBP + -0x20]
0044dabb  LEA EAX,[EDX + ECX*0x1 + 0x98]
0044dac2  PUSH EAX
0044dac3  CALL 0x00462ba0
0044dac8  ADD ESP,0xc
0044dacb  MOV dword ptr [EBP + -0x4],EAX
0044dace  CMP dword ptr [EBP + -0x4],0x2
0044dad2  JNZ 0x0044dafb
0044dad4  PUSH 0x5
0044dad6  MOV ECX,dword ptr [EBP + 0x8]
0044dad9  IMUL ECX,ECX,0xa
0044dadc  MOV EDX,dword ptr [EBP + -0x20]
0044dadf  LEA EAX,[EDX + ECX*0x1 + 0x98]
0044dae6  PUSH EAX
0044dae7  CALL 0x004639e0
0044daec  ADD ESP,0x8
0044daef  CMP EAX,0xa
0044daf2  JGE 0x0044dafb
0044daf4  MOV dword ptr [EBP + -0x4],0x1
0044dafb  MOV dword ptr [EBP + -0x8],0x0
0044db02  JMP 0x0044db0d
0044db04  MOV ECX,dword ptr [EBP + -0x8]
0044db07  ADD ECX,0x1
0044db0a  MOV dword ptr [EBP + -0x8],ECX
0044db0d  CMP dword ptr [EBP + -0x8],0x5
0044db11  JGE 0x0044dba6
0044db17  MOV EDX,dword ptr [EBP + -0x20]
0044db1a  CMP dword ptr [EDX + 0xd4],0x1
0044db21  JNZ 0x0044db50
0044db23  MOV EAX,dword ptr [EBP + -0x8]
0044db26  PUSH EAX
0044db27  MOV ECX,dword ptr [EBP + 0x8]
0044db2a  PUSH ECX
0044db2b  MOV ECX,dword ptr [EBP + -0x20]
0044db2e  CALL 0x0044cd70
0044db33  MOVZX EDX,AX
0044db36  MOV EAX,dword ptr [EBP + -0x20]
0044db39  MOVZX ECX,word ptr [EAX + 0xc0]
0044db40  CMP EDX,ECX
0044db42  JNZ 0x0044db50
0044db44  MOV EDX,dword ptr [EBP + -0x8]
0044db47  MOV word ptr [EBP + EDX*0x2 + -0x1c],0x0
0044db4e  JMP 0x0044dba1
0044db50  MOV EAX,dword ptr [EBP + -0x20]
0044db53  CMP dword ptr [EAX + 0xd4],0x2
0044db5a  JNZ 0x0044db89
0044db5c  MOV ECX,dword ptr [EBP + -0x8]
0044db5f  PUSH ECX
0044db60  MOV EDX,dword ptr [EBP + 0x8]
0044db63  PUSH EDX
0044db64  MOV ECX,dword ptr [EBP + -0x20]
0044db67  CALL 0x0044cd70
0044db6c  MOVZX EAX,AX
0044db6f  MOV ECX,dword ptr [EBP + -0x20]
0044db72  MOVZX EDX,word ptr [ECX + 0xc2]
0044db79  CMP EAX,EDX
0044db7b  JNZ 0x0044db89
0044db7d  MOV EAX,dword ptr [EBP + -0x8]
0044db80  MOV word ptr [EBP + EAX*0x2 + -0x1c],0x0
0044db87  JMP 0x0044dba1
0044db89  MOV ECX,dword ptr [EBP + -0x8]
0044db8c  PUSH ECX
0044db8d  MOV EDX,dword ptr [EBP + 0x8]
0044db90  PUSH EDX
0044db91  MOV ECX,dword ptr [EBP + -0x20]
0044db94  CALL 0x0044cd70
0044db99  MOV ECX,dword ptr [EBP + -0x8]
0044db9c  MOV word ptr [EBP + ECX*0x2 + -0x1c],AX
0044dba1  JMP 0x0044db04
0044dba6  PUSH 0x0
0044dba8  MOV EDX,dword ptr [EBP + 0x8]
0044dbab  PUSH EDX
0044dbac  MOV ECX,dword ptr [EBP + -0x20]
0044dbaf  CALL 0x0044ce00
0044dbb4  SUB EAX,0x1
0044dbb7  PUSH EAX
0044dbb8  LEA EAX,[EBP + -0x1c]
0044dbbb  PUSH EAX
0044dbbc  CALL 0x00462ba0
0044dbc1  ADD ESP,0xc
0044dbc4  MOV dword ptr [EBP + -0xc],EAX
0044dbc7  CMP dword ptr [EBP + -0xc],0x2
0044dbcb  JNZ 0x0044dbf4
0044dbcd  PUSH 0x5
0044dbcf  MOV ECX,dword ptr [EBP + 0x8]
0044dbd2  IMUL ECX,ECX,0xa
0044dbd5  MOV EDX,dword ptr [EBP + -0x20]
0044dbd8  LEA EAX,[EDX + ECX*0x1 + 0x98]
0044dbdf  PUSH EAX
0044dbe0  CALL 0x004639e0
0044dbe5  ADD ESP,0x8
0044dbe8  CMP EAX,0xa
0044dbeb  JGE 0x0044dbf4
0044dbed  MOV dword ptr [EBP + -0xc],0x1
0044dbf4  CMP dword ptr [EBP + -0xc],0x5
0044dbf8  JL 0x0044dc04
0044dbfa  CMP dword ptr [EBP + -0x4],0x2
0044dbfe  JNZ 0x0044dc04
0044dc00  XOR AL,AL
0044dc02  JMP 0x0044dc0f
0044dc04  MOV ECX,dword ptr [EBP + -0x4]
0044dc07  XOR EAX,EAX
0044dc09  CMP ECX,dword ptr [EBP + -0xc]
0044dc0c  SETL AL
0044dc0f  MOV ECX,dword ptr [EBP + -0x10]
0044dc12  XOR ECX,EBP
0044dc14  CALL 0x00686d72
0044dc19  MOV ESP,EBP
0044dc1b  POP EBP
0044dc1c  RET 0x4
