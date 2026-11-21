; FUN_005afba0  005afba0
005afba0  PUSH EBP
005afba1  MOV EBP,ESP
005afba3  PUSH ECX
005afba4  MOV dword ptr [EBP + -0x4],ECX
005afba7  PUSH -0x1
005afba9  MOV ECX,dword ptr [0x007947e0]
005afbaf  CALL 0x005df700
005afbb4  MOVZX EAX,AL
005afbb7  TEST EAX,EAX
005afbb9  JZ 0x005afbca
005afbbb  MOV ECX,dword ptr [EBP + -0x4]
005afbbe  CALL 0x005da7b0
005afbc3  MOVZX ECX,AL
005afbc6  TEST ECX,ECX
005afbc8  JZ 0x005afbcc
005afbca  JMP 0x005afc30
005afbcc  MOV EDX,dword ptr [0x007935f8]
005afbd2  CMP dword ptr [EDX + 0x34],0x0
005afbd6  JZ 0x005afbfd
005afbd8  MOV ECX,dword ptr [0x00793604]
005afbde  CALL 0x005b4f00
005afbe3  PUSH EAX
005afbe4  MOV ECX,dword ptr [0x007935f4]
005afbea  CALL 0x005a4b20
005afbef  PUSH EAX
005afbf0  MOV EAX,[0x007935f8]
005afbf5  MOV ECX,dword ptr [EAX + 0x34]
005afbf8  CALL 0x005a8e90
005afbfd  MOV ECX,dword ptr [0x007935f8]
005afc03  CMP dword ptr [ECX + 0x30],0x0
005afc07  JZ 0x005afc30
005afc09  MOV EDX,dword ptr [0x007935f8]
005afc0f  MOV EAX,dword ptr [EDX + 0x30]
005afc12  MOV ECX,dword ptr [EAX + 0x1bc]
005afc18  MOV EDX,dword ptr [0x007935f8]
005afc1e  MOV EAX,dword ptr [EDX + 0x30]
005afc21  MOV EDX,dword ptr [EAX + 0x1bc]
005afc27  MOV EAX,dword ptr [ECX]
005afc29  MOV ECX,EDX
005afc2b  MOV EDX,dword ptr [EAX + 0x74]
005afc2e  CALL EDX
005afc30  MOV ESP,EBP
005afc32  POP EBP
005afc33  RET 0x4
