; FUN_004fc210  004fc210
004fc210  PUSH EBP
004fc211  MOV EBP,ESP
004fc213  SUB ESP,0x8
004fc216  MOV dword ptr [EBP + -0x8],ECX
004fc219  MOV EAX,dword ptr [EBP + -0x8]
004fc21c  MOV dword ptr [EAX + 0x98],0xffffffff
004fc226  MOV ECX,dword ptr [EBP + -0x8]
004fc229  MOV dword ptr [ECX + 0x80],0x0
004fc233  MOV EDX,dword ptr [EBP + -0x8]
004fc236  MOV dword ptr [EDX + 0x88],0x0
004fc240  MOV EAX,dword ptr [EBP + -0x8]
004fc243  MOV dword ptr [EAX + 0x8c],0x0
004fc24d  MOV ECX,dword ptr [EBP + -0x8]
004fc250  MOV dword ptr [ECX + 0x84],0x0
004fc25a  MOV EDX,dword ptr [EBP + -0x8]
004fc25d  MOV dword ptr [EDX + 0x90],0x0
004fc267  CALL 0x00520d60
004fc26c  MOV dword ptr [EBP + -0x4],EAX
004fc26f  MOV EAX,dword ptr [EBP + -0x4]
004fc272  PUSH EAX
004fc273  CALL 0x005208b0
004fc278  ADD ESP,0x4
004fc27b  PUSH 0x1
004fc27d  CALL 0x00520510
004fc282  ADD ESP,0x4
004fc285  MOV ESP,EBP
004fc287  POP EBP
004fc288  RET
