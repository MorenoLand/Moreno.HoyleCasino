; FUN_005db9e0  005db9e0
005db9e0  PUSH EBP
005db9e1  MOV EBP,ESP
005db9e3  PUSH -0x1
005db9e5  PUSH 0x6a930f
005db9ea  MOV EAX,FS:[0x0]
005db9f0  PUSH EAX
005db9f1  SUB ESP,0x24
005db9f4  MOV EAX,[0x00781870]
005db9f9  XOR EAX,EBP
005db9fb  PUSH EAX
005db9fc  LEA EAX,[EBP + -0xc]
005db9ff  MOV FS:[0x0],EAX
005dba05  MOV dword ptr [EBP + -0x2c],ECX
005dba08  PUSH -0x1
005dba0a  MOV EAX,[0x0162ee84]
005dba0f  MOV EDX,dword ptr [EAX]
005dba11  MOV ECX,dword ptr [0x0162ee84]
005dba17  MOV EAX,dword ptr [EDX + 0x33c]
005dba1d  CALL EAX
005dba1f  MOVZX ECX,AL
005dba22  TEST ECX,ECX
005dba24  JZ 0x005dba38
005dba26  CMP dword ptr [0x0163068c],0x0
005dba2d  JNZ 0x005dba38
005dba2f  CMP dword ptr [0x016306b0],0x0
005dba36  JZ 0x005dba3d
005dba38  JMP 0x005dbb26
005dba3d  MOV EDX,dword ptr [EBP + 0x8]
005dba40  PUSH EDX
005dba41  MOV ECX,dword ptr [EBP + -0x2c]
005dba44  CALL 0x005d89b0
005dba49  MOV dword ptr [EBP + -0x18],EAX
005dba4c  CMP dword ptr [0x007947b4],0x0
005dba53  JNZ 0x005dba9c
005dba55  PUSH 0x1bc
005dba5a  CALL 0x00686d82
005dba5f  ADD ESP,0x4
005dba62  MOV dword ptr [EBP + -0x20],EAX
005dba65  MOV dword ptr [EBP + -0x4],0x0
005dba6c  CMP dword ptr [EBP + -0x20],0x0
005dba70  JZ 0x005dba7f
005dba72  MOV ECX,dword ptr [EBP + -0x20]
005dba75  CALL 0x005cdd90
005dba7a  MOV dword ptr [EBP + -0x30],EAX
005dba7d  JMP 0x005dba86
005dba7f  MOV dword ptr [EBP + -0x30],0x0
005dba86  MOV EAX,dword ptr [EBP + -0x30]
005dba89  MOV dword ptr [EBP + -0x1c],EAX
005dba8c  MOV dword ptr [EBP + -0x4],0xffffffff
005dba93  MOV ECX,dword ptr [EBP + -0x1c]
005dba96  MOV dword ptr [0x007947b4],ECX
005dba9c  MOV EDX,dword ptr [EBP + -0x18]
005dba9f  PUSH EDX
005dbaa0  MOV ECX,dword ptr [0x007947b4]
005dbaa6  CALL 0x005cde20
005dbaab  MOV EAX,dword ptr [EBP + -0x18]
005dbaae  MOV ECX,dword ptr [EAX + 0x4]
005dbab1  PUSH ECX
005dbab2  LEA EDX,[EBP + -0x28]
005dbab5  PUSH EDX
005dbab6  MOV EAX,dword ptr [EBP + -0x2c]
005dbab9  MOV EDX,dword ptr [EAX]
005dbabb  MOV ECX,dword ptr [EBP + -0x2c]
005dbabe  MOV EAX,dword ptr [EDX + 0x2ec]
005dbac4  CALL EAX
005dbac6  MOV ECX,dword ptr [EAX]
005dbac8  MOV EDX,dword ptr [EAX + 0x4]
005dbacb  MOV dword ptr [EBP + -0x14],ECX
005dbace  MOV dword ptr [EBP + -0x10],EDX
005dbad1  CMP dword ptr [EBP + -0x14],0x0
005dbad5  JNZ 0x005dbb08
005dbad7  CMP dword ptr [EBP + -0x10],0x0
005dbadb  JNZ 0x005dbb08
005dbadd  MOV EAX,dword ptr [EBP + -0x18]
005dbae0  MOV ECX,dword ptr [EAX + 0x20]
005dbae3  CALL 0x00646e70
005dbae8  SUB EAX,0x50
005dbaeb  PUSH EAX
005dbaec  MOV ECX,dword ptr [EBP + -0x18]
005dbaef  MOV ECX,dword ptr [ECX + 0x20]
005dbaf2  CALL 0x00646e40
005dbaf7  SUB EAX,0x14
005dbafa  PUSH EAX
005dbafb  MOV ECX,dword ptr [0x007947b4]
005dbb01  CALL 0x005f7320
005dbb06  JMP 0x005dbb1b
005dbb08  MOV EDX,dword ptr [EBP + -0x10]
005dbb0b  PUSH EDX
005dbb0c  MOV EAX,dword ptr [EBP + -0x14]
005dbb0f  PUSH EAX
005dbb10  MOV ECX,dword ptr [0x007947b4]
005dbb16  CALL 0x005f7320
005dbb1b  MOV ECX,dword ptr [0x007947b4]
005dbb21  CALL 0x005f85d0
005dbb26  MOV ECX,dword ptr [EBP + -0xc]
005dbb29  MOV dword ptr FS:[0x0],ECX
005dbb30  POP ECX
005dbb31  MOV ESP,EBP
005dbb33  POP EBP
005dbb34  RET 0x4
