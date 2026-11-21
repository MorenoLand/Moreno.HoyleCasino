; FUN_005bceb0  005bceb0
005bceb0  PUSH EBP
005bceb1  MOV EBP,ESP
005bceb3  PUSH ECX
005bceb4  MOV dword ptr [EBP + -0x4],ECX
005bceb7  MOV EAX,dword ptr [EBP + -0x4]
005bceba  MOV EDX,dword ptr [EAX]
005bcebc  MOV ECX,dword ptr [EBP + -0x4]
005bcebf  MOV EAX,dword ptr [EDX + 0x10]
005bcec2  CALL EAX
005bcec4  MOV ECX,dword ptr [EBP + -0x4]
005bcec7  MOV EDX,dword ptr [EBP + 0x8]
005bceca  MOV dword ptr [ECX + 0x54],EDX
005bcecd  MOV EAX,dword ptr [EBP + -0x4]
005bced0  MOV EDX,dword ptr [EAX]
005bced2  MOV ECX,dword ptr [EBP + -0x4]
005bced5  MOV EAX,dword ptr [EDX + 0x10]
005bced8  CALL EAX
005bceda  MOV ESP,EBP
005bcedc  POP EBP
005bcedd  RET 0x4
