; FUN_005ffe80  005ffe80
005ffe80  PUSH EBP
005ffe81  MOV EBP,ESP
005ffe83  PUSH ECX
005ffe84  MOV dword ptr [EBP + -0x4],ECX
005ffe87  PUSH 0x0
005ffe89  PUSH 0x0
005ffe8b  MOV EAX,dword ptr [EBP + 0x18]
005ffe8e  PUSH EAX
005ffe8f  MOV ECX,dword ptr [EBP + 0x14]
005ffe92  PUSH ECX
005ffe93  MOV EDX,dword ptr [EBP + 0x10]
005ffe96  PUSH EDX
005ffe97  MOV EAX,dword ptr [EBP + 0xc]
005ffe9a  PUSH EAX
005ffe9b  MOV ECX,dword ptr [EBP + 0x8]
005ffe9e  PUSH ECX
005ffe9f  MOV ECX,dword ptr [EBP + -0x4]
005ffea2  CALL 0x00602830
005ffea7  MOV EDX,dword ptr [EBP + -0x4]
005ffeaa  MOV ECX,dword ptr [EDX + 0x190]
005ffeb0  CALL 0x005ef050
005ffeb5  ADD EAX,0x5
005ffeb8  PUSH EAX
005ffeb9  MOV EAX,dword ptr [EBP + -0x4]
005ffebc  MOV ECX,dword ptr [EAX + 0x190]
005ffec2  CALL 0x005ecc60
005ffec7  MOV ECX,dword ptr [EBP + -0x4]
005ffeca  MOV ECX,dword ptr [ECX + 0x190]
005ffed0  CALL 0x005ef130
005ffed5  ADD EAX,0x2
005ffed8  PUSH EAX
005ffed9  MOV EDX,dword ptr [EBP + -0x4]
005ffedc  MOV ECX,dword ptr [EDX + 0x190]
005ffee2  CALL 0x005eccb0
005ffee7  MOV EAX,dword ptr [EBP + 0x20]
005ffeea  PUSH EAX
005ffeeb  MOV ECX,dword ptr [EBP + 0x1c]
005ffeee  PUSH ECX
005ffeef  MOV ECX,dword ptr [EBP + -0x4]
005ffef2  CALL 0x00600300
005ffef7  MOV EDX,dword ptr [EBP + -0x4]
005ffefa  MOV EAX,dword ptr [EDX]
005ffefc  MOV ECX,dword ptr [EBP + -0x4]
005ffeff  MOV EDX,dword ptr [EAX + 0x54]
005fff02  CALL EDX
005fff04  PUSH EAX
005fff05  MOV EAX,dword ptr [EBP + -0x4]
005fff08  MOV EDX,dword ptr [EAX]
005fff0a  MOV ECX,dword ptr [EBP + -0x4]
005fff0d  MOV EAX,dword ptr [EDX + 0x4c]
005fff10  CALL EAX
005fff12  PUSH EAX
005fff13  MOV ECX,dword ptr [EBP + -0x4]
005fff16  MOV EDX,dword ptr [ECX]
005fff18  MOV ECX,dword ptr [EBP + -0x4]
005fff1b  MOV EAX,dword ptr [EDX + 0x44]
005fff1e  CALL EAX
005fff20  MOV ESP,EBP
005fff22  POP EBP
005fff23  RET 0x1c
