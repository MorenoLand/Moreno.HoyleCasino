; FUN_005aa7a0  005aa7a0
005aa7a0  PUSH EBP
005aa7a1  MOV EBP,ESP
005aa7a3  SUB ESP,0x8
005aa7a6  MOV dword ptr [EBP + -0x4],ECX
005aa7a9  MOV ECX,dword ptr [EBP + -0x4]
005aa7ac  CALL 0x005fc360
005aa7b1  MOV dword ptr [EBP + -0x8],EAX
005aa7b4  CMP dword ptr [EBP + -0x8],0x0
005aa7b8  JZ 0x005aa7cf
005aa7ba  CMP dword ptr [EBP + -0x8],0x1
005aa7be  JZ 0x005aa814
005aa7c0  CMP dword ptr [EBP + -0x8],0x2
005aa7c4  JZ 0x005aa931
005aa7ca  JMP 0x005aa95e
005aa7cf  MOV dword ptr [0x007935e0],0x0
005aa7d9  MOV EAX,[0x007935f8]
005aa7de  MOV ECX,dword ptr [EAX + 0x3c]
005aa7e1  CALL 0x005eb240
005aa7e6  MOV [0x007935dc],EAX
005aa7eb  MOV ECX,dword ptr [0x007935f8]
005aa7f1  MOV ECX,dword ptr [ECX + 0x40]
005aa7f4  CALL 0x005eb240
005aa7f9  MOV [0x007935d8],EAX
005aa7fe  PUSH 0x4
005aa800  PUSH 0x1
005aa802  MOV EDX,dword ptr [EBP + -0x4]
005aa805  MOV EAX,dword ptr [EDX]
005aa807  MOV ECX,dword ptr [EBP + -0x4]
005aa80a  MOV EDX,dword ptr [EAX + 0x8]
005aa80d  CALL EDX
005aa80f  JMP 0x005aa979
005aa814  MOV EAX,[0x007935e0]
005aa819  ADD EAX,0x1
005aa81c  MOV [0x007935e0],EAX
005aa821  MOV ECX,dword ptr [0x007935e0]
005aa827  CMP ECX,dword ptr [0x007935d8]
005aa82d  JG 0x005aa853
005aa82f  MOV EDX,dword ptr [0x007935e0]
005aa835  PUSH EDX
005aa836  MOV EAX,[0x007935f8]
005aa83b  MOV ECX,dword ptr [EAX + 0x40]
005aa83e  MOV EDX,dword ptr [0x007935f8]
005aa844  MOV EAX,dword ptr [EDX + 0x40]
005aa847  MOV EDX,dword ptr [ECX]
005aa849  MOV ECX,EAX
005aa84b  MOV EAX,dword ptr [EDX + 0xb0]
005aa851  CALL EAX
005aa853  MOV ECX,dword ptr [0x007935e0]
005aa859  CMP ECX,dword ptr [0x007935dc]
005aa85f  JG 0x005aa885
005aa861  MOV EDX,dword ptr [0x007935e0]
005aa867  PUSH EDX
005aa868  MOV EAX,[0x007935f8]
005aa86d  MOV ECX,dword ptr [EAX + 0x3c]
005aa870  MOV EDX,dword ptr [0x007935f8]
005aa876  MOV EAX,dword ptr [EDX + 0x3c]
005aa879  MOV EDX,dword ptr [ECX]
005aa87b  MOV ECX,EAX
005aa87d  MOV EAX,dword ptr [EDX + 0xb0]
005aa883  CALL EAX
005aa885  MOV ECX,dword ptr [EBP + -0x4]
005aa888  MOVZX EDX,byte ptr [ECX + 0x20]
005aa88c  NEG EDX
005aa88e  SBB EDX,EDX
005aa890  AND EDX,0x3
005aa893  ADD EDX,0x4
005aa896  CMP dword ptr [0x007935e0],EDX
005aa89c  JNZ 0x005aa8e4
005aa89e  MOV ECX,dword ptr [0x00793604]
005aa8a4  CALL 0x005b6790
005aa8a9  MOV ECX,dword ptr [0x00793604]
005aa8af  CMP dword ptr [ECX + 0x5b0],EAX
005aa8b5  JNZ 0x005aa8e4
005aa8b7  PUSH 0x13a1
005aa8bc  MOV EDX,dword ptr [0x007935f8]
005aa8c2  MOV ECX,dword ptr [EDX + 0x44]
005aa8c5  CALL 0x005eaf00
005aa8ca  MOV EAX,[0x007935f8]
005aa8cf  MOV ECX,dword ptr [EAX + 0x44]
005aa8d2  MOV EDX,dword ptr [0x007935f8]
005aa8d8  MOV EAX,dword ptr [EDX + 0x44]
005aa8db  MOV EDX,dword ptr [ECX]
005aa8dd  MOV ECX,EAX
005aa8df  MOV EAX,dword ptr [EDX + 0x74]
005aa8e2  CALL EAX
005aa8e4  MOV ECX,dword ptr [0x007935e0]
005aa8ea  CMP ECX,dword ptr [0x007935dc]
005aa8f0  JL 0x005aa900
005aa8f2  MOV EDX,dword ptr [0x007935e0]
005aa8f8  CMP EDX,dword ptr [0x007935d8]
005aa8fe  JGE 0x005aa911
005aa900  PUSH 0x1
005aa902  MOV EAX,dword ptr [EBP + -0x4]
005aa905  MOV EDX,dword ptr [EAX]
005aa907  MOV ECX,dword ptr [EBP + -0x4]
005aa90a  MOV EAX,dword ptr [EDX + 0x4]
005aa90d  CALL EAX
005aa90f  JMP 0x005aa920
005aa911  PUSH 0x2
005aa913  MOV ECX,dword ptr [EBP + -0x4]
005aa916  MOV EDX,dword ptr [ECX]
005aa918  MOV ECX,dword ptr [EBP + -0x4]
005aa91b  MOV EAX,dword ptr [EDX + 0x4]
005aa91e  CALL EAX
005aa920  PUSH 0x4
005aa922  MOV ECX,dword ptr [EBP + -0x4]
005aa925  MOV EDX,dword ptr [ECX]
005aa927  MOV ECX,dword ptr [EBP + -0x4]
005aa92a  MOV EAX,dword ptr [EDX + 0x1c]
005aa92d  CALL EAX
005aa92f  JMP 0x005aa979
005aa931  MOV ECX,dword ptr [EBP + -0x4]
005aa934  CMP dword ptr [ECX + 0x10],0x0
005aa938  JZ 0x005aa95c
005aa93a  PUSH 0x0
005aa93c  MOV EDX,dword ptr [EBP + -0x4]
005aa93f  MOV EAX,dword ptr [EDX + 0x10]
005aa942  MOV ECX,dword ptr [EBP + -0x4]
005aa945  MOV ECX,dword ptr [ECX + 0x10]
005aa948  MOV EDX,dword ptr [EAX]
005aa94a  MOV EAX,dword ptr [EDX + 0x1c]
005aa94d  CALL EAX
005aa94f  PUSH 0x0
005aa951  MOV ECX,dword ptr [EBP + -0x4]
005aa954  MOV ECX,dword ptr [ECX + 0x10]
005aa957  CALL 0x005fc420
005aa95c  JMP 0x005aa979
005aa95e  XOR EDX,EDX
005aa960  JNZ 0x005aa979
005aa962  PUSH 0x437
005aa967  PUSH 0x6cf934
005aa96c  PUSH 0x6b2f58
005aa971  CALL 0x005e9f20
005aa976  ADD ESP,0xc
005aa979  MOV ESP,EBP
005aa97b  POP EBP
005aa97c  RET
