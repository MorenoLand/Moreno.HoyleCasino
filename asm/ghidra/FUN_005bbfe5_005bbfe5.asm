; FUN_005bbfe5  005bbfe5
005bbfe5  MOV EAX,dword ptr [EBP + -0x14]
005bbfe8  CMP EAX,dword ptr [EBP + 0x8]
005bbfeb  JZ 0x005bc00a
005bbfed  MOV ECX,dword ptr [EBP + -0x14]
005bbff0  CALL 0x005be450
005bbff5  XOR ECX,ECX
005bbff7  AND ECX,0x1
005bbffa  JZ 0x005bc008
005bbffc  MOV EDX,dword ptr [EBP + -0x14]
005bbfff  PUSH EDX
005bc000  CALL 0x00686cae
005bc005  ADD ESP,0x4
005bc008  JMP 0x005bbfdc
005bc00a  PUSH 0x0
005bc00c  PUSH 0x0
005bc00e  CALL 0x00686fc0
