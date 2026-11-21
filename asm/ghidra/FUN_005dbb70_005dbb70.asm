; FUN_005dbb70  005dbb70
005dbb70  PUSH EBP
005dbb71  MOV EBP,ESP
005dbb73  PUSH -0x1
005dbb75  PUSH 0x6a9335
005dbb7a  MOV EAX,FS:[0x0]
005dbb80  PUSH EAX
005dbb81  SUB ESP,0x10
005dbb84  PUSH ESI
005dbb85  MOV EAX,[0x00781870]
005dbb8a  XOR EAX,EBP
005dbb8c  PUSH EAX
005dbb8d  LEA EAX,[EBP + -0xc]
005dbb90  MOV FS:[0x0],EAX
005dbb96  MOV dword ptr [EBP + -0x18],ECX
005dbb99  MOV ECX,dword ptr [EBP + -0x18]
005dbb9c  CALL 0x005da7b0
005dbba1  MOVZX EAX,AL
005dbba4  TEST EAX,EAX
005dbba6  JZ 0x005dbbad
005dbba8  JMP 0x005dbcb7
005dbbad  MOVZX ECX,byte ptr [0x00795f95]
005dbbb4  TEST ECX,ECX
005dbbb6  JZ 0x005dbc3e
005dbbbc  MOV ECX,dword ptr [0x0162ee84]
005dbbc2  CALL 0x005f3bb0
005dbbc7  MOV ESI,EAX
005dbbc9  MOV EDX,dword ptr [0x0162ee84]
005dbbcf  MOV EAX,dword ptr [EDX]
005dbbd1  MOV ECX,dword ptr [0x0162ee84]
005dbbd7  MOV EDX,dword ptr [EAX + 0x258]
005dbbdd  CALL EDX
005dbbdf  CMP ESI,EAX
005dbbe1  JNZ 0x005dbbe8
005dbbe3  JMP 0x005dbcb7
005dbbe8  PUSH 0x30d507
005dbbed  PUSH 0x0
005dbbef  PUSH 0x6d4510
005dbbf4  CALL 0x00630f40
005dbbf9  ADD ESP,0x4
005dbbfc  PUSH EAX
005dbbfd  PUSH 0x6d44f8
005dbc02  CALL 0x00630f40
005dbc07  ADD ESP,0x4
005dbc0a  PUSH EAX
005dbc0b  CALL 0x0062ff30
005dbc10  ADD ESP,0x10
005dbc13  MOV EAX,[0x0162ee84]
005dbc18  MOV EDX,dword ptr [EAX]
005dbc1a  MOV ECX,dword ptr [0x0162ee84]
005dbc20  MOV EAX,dword ptr [EDX + 0x258]
005dbc26  CALL EAX
005dbc28  PUSH EAX
005dbc29  MOV ECX,dword ptr [0x0162ee84]
005dbc2f  MOV EDX,dword ptr [ECX]
005dbc31  MOV ECX,dword ptr [0x0162ee84]
005dbc37  MOV EAX,dword ptr [EDX + 0x34]
005dbc3a  CALL EAX
005dbc3c  JMP 0x005dbcb7
005dbc3e  CMP dword ptr [0x007947b8],0x0
005dbc45  JNZ 0x005dbcac
005dbc47  PUSH 0x1c0
005dbc4c  CALL 0x00686d82
005dbc51  ADD ESP,0x4
005dbc54  MOV dword ptr [EBP + -0x14],EAX
005dbc57  MOV dword ptr [EBP + -0x4],0x0
005dbc5e  CMP dword ptr [EBP + -0x14],0x0
005dbc62  JZ 0x005dbc71
005dbc64  MOV ECX,dword ptr [EBP + -0x14]
005dbc67  CALL 0x005ce250
005dbc6c  MOV dword ptr [EBP + -0x1c],EAX
005dbc6f  JMP 0x005dbc78
005dbc71  MOV dword ptr [EBP + -0x1c],0x0
005dbc78  MOV ECX,dword ptr [EBP + -0x1c]
005dbc7b  MOV dword ptr [EBP + -0x10],ECX
005dbc7e  MOV dword ptr [EBP + -0x4],0xffffffff
005dbc85  MOV EDX,dword ptr [EBP + -0x10]
005dbc88  MOV dword ptr [0x007947b8],EDX
005dbc8e  MOV EAX,dword ptr [EBP + 0x8]
005dbc91  PUSH EAX
005dbc92  MOV ECX,dword ptr [0x007947b8]
005dbc98  CALL 0x005ce2e0
005dbc9d  PUSH 0x0
005dbc9f  PUSH 0x0
005dbca1  MOV ECX,dword ptr [0x007947b8]
005dbca7  CALL 0x005f7340
005dbcac  MOV ECX,dword ptr [0x007947b8]
005dbcb2  CALL 0x005f85d0
005dbcb7  MOV ECX,dword ptr [EBP + -0xc]
005dbcba  MOV dword ptr FS:[0x0],ECX
005dbcc1  POP ECX
005dbcc2  POP ESI
005dbcc3  MOV ESP,EBP
005dbcc5  POP EBP
005dbcc6  RET 0x4
