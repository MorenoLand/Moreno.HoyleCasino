; FUN_0066afb0  0066afb0
0066afb0  PUSH EBP
0066afb1  MOV EBP,ESP
0066afb3  SUB ESP,0x44
0066afb6  MOV dword ptr [EBP + -0x34],ECX
0066afb9  MOV ECX,dword ptr [EBP + -0x34]
0066afbc  CALL 0x005fc360
0066afc1  MOV dword ptr [EBP + -0x38],EAX
0066afc4  CMP dword ptr [EBP + -0x38],0x0
0066afc8  JZ 0x0066afdf
0066afca  CMP dword ptr [EBP + -0x38],0x1
0066afce  JZ 0x0066b04b
0066afd0  CMP dword ptr [EBP + -0x38],0x2
0066afd4  JZ 0x0066b13a
0066afda  JMP 0x0066b1f9
0066afdf  LEA EAX,[EBP + -0x20]
0066afe2  PUSH EAX
0066afe3  MOV ECX,dword ptr [0x0162ee84]
0066afe9  MOV EDX,dword ptr [ECX]
0066afeb  MOV ECX,dword ptr [0x0162ee84]
0066aff1  MOV EAX,dword ptr [EDX + 0x2e4]
0066aff7  CALL EAX
0066aff9  MOV ECX,dword ptr [EAX]
0066affb  MOV EDX,dword ptr [EAX + 0x4]
0066affe  MOV dword ptr [EBP + -0x8],ECX
0066b001  MOV dword ptr [EBP + -0x4],EDX
0066b004  MOV EAX,dword ptr [EBP + -0x8]
0066b007  MOV [0x016306bc],EAX
0066b00c  MOV ECX,dword ptr [EBP + -0x4]
0066b00f  MOV dword ptr [0x016306b8],ECX
0066b015  PUSH 0x0
0066b017  MOV EDX,dword ptr [0x0162ee84]
0066b01d  MOV ECX,dword ptr [EDX + 0x14]
0066b020  CALL 0x005fb2b0
0066b025  MOV dword ptr [EBP + -0x3c],EAX
0066b028  MOV EAX,dword ptr [EBP + -0x3c]
0066b02b  MOV EDX,dword ptr [EAX]
0066b02d  MOV ECX,dword ptr [EBP + -0x3c]
0066b030  MOV EAX,dword ptr [EDX + 0x74]
0066b033  CALL EAX
0066b035  PUSH 0x0
0066b037  PUSH 0x1
0066b039  MOV ECX,dword ptr [EBP + -0x34]
0066b03c  MOV EDX,dword ptr [ECX]
0066b03e  MOV ECX,dword ptr [EBP + -0x34]
0066b041  MOV EAX,dword ptr [EDX + 0x8]
0066b044  CALL EAX
0066b046  JMP 0x0066b1f9
0066b04b  PUSH 0x0
0066b04d  MOV ECX,dword ptr [0x0162ee84]
0066b053  MOV ECX,dword ptr [ECX + 0x14]
0066b056  CALL 0x005fb2b0
0066b05b  MOV dword ptr [EBP + -0x40],EAX
0066b05e  MOV EDX,dword ptr [0x016306b8]
0066b064  PUSH EDX
0066b065  MOV EAX,dword ptr [EBP + -0x40]
0066b068  MOV EDX,dword ptr [EAX]
0066b06a  MOV ECX,dword ptr [EBP + -0x40]
0066b06d  MOV EAX,dword ptr [EDX + 0x50]
0066b070  CALL EAX
0066b072  MOV ECX,dword ptr [0x0162ee84]
0066b078  MOV EDX,dword ptr [ECX]
0066b07a  MOV ECX,dword ptr [0x0162ee84]
0066b080  MOV EAX,dword ptr [EDX + 0x2ec]
0066b086  CALL EAX
0066b088  MOV ECX,dword ptr [0x016306b8]
0066b08e  SUB ECX,EAX
0066b090  MOV dword ptr [0x016306b8],ECX
0066b096  PUSH 0x0
0066b098  MOV EDX,dword ptr [0x0162ee84]
0066b09e  MOV ECX,dword ptr [EDX + 0x14]
0066b0a1  CALL 0x005fb2b0
0066b0a6  MOV ECX,EAX
0066b0a8  CALL 0x005f5590
0066b0ad  NEG EAX
0066b0af  CMP dword ptr [0x016306b8],EAX
0066b0b5  JGE 0x0066b10f
0066b0b7  LEA EAX,[EBP + -0x28]
0066b0ba  PUSH EAX
0066b0bb  MOV ECX,dword ptr [0x0162ee84]
0066b0c1  MOV EDX,dword ptr [ECX]
0066b0c3  MOV ECX,dword ptr [0x0162ee84]
0066b0c9  MOV EAX,dword ptr [EDX + 0x2e8]
0066b0cf  CALL EAX
0066b0d1  MOV ECX,dword ptr [EAX]
0066b0d3  MOV EDX,dword ptr [EAX + 0x4]
0066b0d6  MOV dword ptr [EBP + -0x10],ECX
0066b0d9  MOV dword ptr [EBP + -0xc],EDX
0066b0dc  MOV EAX,dword ptr [EBP + -0xc]
0066b0df  MOV [0x016306b8],EAX
0066b0e4  MOV ECX,dword ptr [0x0162ee84]
0066b0ea  MOV EDX,dword ptr [ECX]
0066b0ec  MOV ECX,dword ptr [0x0162ee84]
0066b0f2  MOV EAX,dword ptr [EDX + 0x2f0]
0066b0f8  CALL EAX
0066b0fa  PUSH EAX
0066b0fb  PUSH 0x2
0066b0fd  MOV ECX,dword ptr [EBP + -0x34]
0066b100  MOV EDX,dword ptr [ECX]
0066b102  MOV ECX,dword ptr [EBP + -0x34]
0066b105  MOV EAX,dword ptr [EDX + 0x8]
0066b108  CALL EAX
0066b10a  JMP 0x0066b1f9
0066b10f  MOV ECX,dword ptr [0x0162ee84]
0066b115  MOV EDX,dword ptr [ECX]
0066b117  MOV ECX,dword ptr [0x0162ee84]
0066b11d  MOV EAX,dword ptr [EDX + 0x2f0]
0066b123  CALL EAX
0066b125  PUSH EAX
0066b126  PUSH 0x1
0066b128  MOV ECX,dword ptr [EBP + -0x34]
0066b12b  MOV EDX,dword ptr [ECX]
0066b12d  MOV ECX,dword ptr [EBP + -0x34]
0066b130  MOV EAX,dword ptr [EDX + 0x8]
0066b133  CALL EAX
0066b135  JMP 0x0066b1f9
0066b13a  PUSH 0x0
0066b13c  MOV ECX,dword ptr [0x0162ee84]
0066b142  MOV ECX,dword ptr [ECX + 0x14]
0066b145  CALL 0x005fb2b0
0066b14a  MOV dword ptr [EBP + -0x44],EAX
0066b14d  MOV EDX,dword ptr [0x016306b8]
0066b153  PUSH EDX
0066b154  MOV EAX,dword ptr [EBP + -0x44]
0066b157  MOV EDX,dword ptr [EAX]
0066b159  MOV ECX,dword ptr [EBP + -0x44]
0066b15c  MOV EAX,dword ptr [EDX + 0x50]
0066b15f  CALL EAX
0066b161  MOV ECX,dword ptr [0x0162ee84]
0066b167  MOV EDX,dword ptr [ECX]
0066b169  MOV ECX,dword ptr [0x0162ee84]
0066b16f  MOV EAX,dword ptr [EDX + 0x2ec]
0066b175  CALL EAX
0066b177  MOV ECX,dword ptr [0x016306b8]
0066b17d  SUB ECX,EAX
0066b17f  MOV dword ptr [0x016306b8],ECX
0066b185  PUSH 0x0
0066b187  MOV EDX,dword ptr [0x0162ee84]
0066b18d  MOV ECX,dword ptr [EDX + 0x14]
0066b190  CALL 0x005fb2b0
0066b195  MOV ECX,EAX
0066b197  CALL 0x005f5590
0066b19c  NEG EAX
0066b19e  CMP dword ptr [0x016306b8],EAX
0066b1a4  JGE 0x0066b1d3
0066b1a6  LEA EAX,[EBP + -0x30]
0066b1a9  PUSH EAX
0066b1aa  MOV ECX,dword ptr [0x0162ee84]
0066b1b0  MOV EDX,dword ptr [ECX]
0066b1b2  MOV ECX,dword ptr [0x0162ee84]
0066b1b8  MOV EAX,dword ptr [EDX + 0x2e8]
0066b1be  CALL EAX
0066b1c0  MOV ECX,dword ptr [EAX]
0066b1c2  MOV EDX,dword ptr [EAX + 0x4]
0066b1c5  MOV dword ptr [EBP + -0x18],ECX
0066b1c8  MOV dword ptr [EBP + -0x14],EDX
0066b1cb  MOV EAX,dword ptr [EBP + -0x14]
0066b1ce  MOV [0x016306b8],EAX
0066b1d3  MOV ECX,dword ptr [0x0162ee84]
0066b1d9  MOV EDX,dword ptr [ECX]
0066b1db  MOV ECX,dword ptr [0x0162ee84]
0066b1e1  MOV EAX,dword ptr [EDX + 0x2f0]
0066b1e7  CALL EAX
0066b1e9  PUSH EAX
0066b1ea  PUSH 0x2
0066b1ec  MOV ECX,dword ptr [EBP + -0x34]
0066b1ef  MOV EDX,dword ptr [ECX]
0066b1f1  MOV ECX,dword ptr [EBP + -0x34]
0066b1f4  MOV EAX,dword ptr [EDX + 0x8]
0066b1f7  CALL EAX
0066b1f9  MOV ESP,EBP
0066b1fb  POP EBP
0066b1fc  RET
