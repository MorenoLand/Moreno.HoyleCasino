; FUN_005aea50  005aea50
005aea50  PUSH EBP
005aea51  MOV EBP,ESP
005aea53  PUSH ECX
005aea54  MOV dword ptr [EBP + -0x4],ECX
005aea57  MOV EAX,dword ptr [EBP + -0x4]
005aea5a  MOVZX ECX,byte ptr [EAX + 0xb]
005aea5e  TEST ECX,ECX
005aea60  JNZ 0x005aea98
005aea62  MOV EDX,dword ptr [EBP + -0x4]
005aea65  MOV byte ptr [EDX + 0xb],0x1
005aea69  PUSH 0x4
005aea6b  PUSH 0xa
005aea6d  MOV ECX,dword ptr [0x00793604]
005aea73  CALL 0x005b7310
005aea78  PUSH 0x0
005aea7a  PUSH 0x1
005aea7c  MOV EAX,[0x00793600]
005aea81  MOV ECX,dword ptr [EAX + 0x4]
005aea84  MOV EDX,dword ptr [0x00793600]
005aea8a  MOV EAX,dword ptr [EDX + 0x4]
005aea8d  MOV EDX,dword ptr [ECX]
005aea8f  MOV ECX,EAX
005aea91  MOV EAX,dword ptr [EDX + 0x8]
005aea94  CALL EAX
005aea96  JMP 0x005aeb13
005aea98  MOV ECX,dword ptr [EBP + -0x4]
005aea9b  MOVZX EDX,byte ptr [ECX + 0xe]
005aea9f  TEST EDX,EDX
005aeaa1  JNZ 0x005aeada
005aeaa3  MOV EAX,dword ptr [EBP + -0x4]
005aeaa6  MOV byte ptr [EAX + 0xe],0x1
005aeaaa  MOV ECX,dword ptr [EBP + 0x8]
005aeaad  PUSH ECX
005aeaae  PUSH 0x3
005aeab0  MOV ECX,dword ptr [0x00793604]
005aeab6  CALL 0x005b7310
005aeabb  PUSH 0x0
005aeabd  PUSH 0x1
005aeabf  MOV EDX,dword ptr [0x00793600]
005aeac5  MOV EAX,dword ptr [EDX + 0x4]
005aeac8  MOV ECX,dword ptr [0x00793600]
005aeace  MOV ECX,dword ptr [ECX + 0x4]
005aead1  MOV EDX,dword ptr [EAX]
005aead3  MOV EAX,dword ptr [EDX + 0x8]
005aead6  CALL EAX
005aead8  JMP 0x005aeb13
005aeada  MOV ECX,dword ptr [EBP + -0x4]
005aeadd  MOV byte ptr [ECX + 0xb],0x0
005aeae1  MOV EDX,dword ptr [EBP + -0x4]
005aeae4  MOV byte ptr [EDX + 0xe],0x0
005aeae8  MOV EAX,dword ptr [EBP + 0x8]
005aeaeb  PUSH EAX
005aeaec  MOV ECX,dword ptr [0x00793604]
005aeaf2  CALL 0x005b3e60
005aeaf7  PUSH 0x0
005aeaf9  PUSH 0x1
005aeafb  MOV ECX,dword ptr [0x00793600]
005aeb01  MOV EDX,dword ptr [ECX + 0x4]
005aeb04  MOV EAX,[0x00793600]
005aeb09  MOV ECX,dword ptr [EAX + 0x4]
005aeb0c  MOV EDX,dword ptr [EDX]
005aeb0e  MOV EAX,dword ptr [EDX + 0x8]
005aeb11  CALL EAX
005aeb13  MOV ESP,EBP
005aeb15  POP EBP
005aeb16  RET 0x4
