; FUN_005d50c0  005d50c0
005d50c0  PUSH EBP
005d50c1  MOV EBP,ESP
005d50c3  SUB ESP,0x24
005d50c6  MOV dword ptr [EBP + -0x24],ECX
005d50c9  MOV ECX,dword ptr [EBP + -0x24]
005d50cc  CALL 0x005d52e0
005d50d1  MOV dword ptr [EBP + -0x1c],EAX
005d50d4  PUSH 0x76f4
005d50d9  PUSH 0x0
005d50db  MOV EAX,dword ptr [EBP + -0x24]
005d50de  MOV ECX,dword ptr [EAX + 0x3a4]
005d50e4  PUSH ECX
005d50e5  CALL 0x00686fa2
005d50ea  ADD ESP,0xc
005d50ed  MOV dword ptr [EBP + -0x10],0x76f4
005d50f4  PUSH -0x1
005d50f6  MOV EDX,dword ptr [0x0162ee84]
005d50fc  MOV EAX,dword ptr [EDX]
005d50fe  MOV ECX,dword ptr [0x0162ee84]
005d5104  MOV EDX,dword ptr [EAX + 0x33c]
005d510a  CALL EDX
005d510c  MOVZX EAX,AL
005d510f  TEST EAX,EAX
005d5111  JZ 0x005d5138
005d5113  CMP dword ptr [0x016306b0],0x0
005d511a  JNZ 0x005d5138
005d511c  MOV ECX,dword ptr [EBP + -0x24]
005d511f  PUSH ECX
005d5120  MOV EDX,dword ptr [0x007947e4]
005d5126  MOV EAX,dword ptr [EDX]
005d5128  MOV ECX,dword ptr [0x007947e4]
005d512e  MOV EDX,dword ptr [EAX + 0x264]
005d5134  CALL EDX
005d5136  JMP 0x005d514b
005d5138  MOV EAX,dword ptr [EBP + -0x1c]
005d513b  MOV dword ptr [EAX],0x1388
005d5141  MOV ECX,dword ptr [EBP + -0x1c]
005d5144  MOV dword ptr [ECX + 0x4],0x0
005d514b  MOV dword ptr [EBP + -0x18],0x1e61
005d5152  PUSH 0x2710
005d5157  CALL 0x0062fbf0
005d515c  ADD ESP,0x4
005d515f  MOV dword ptr [EBP + -0x4],EAX
005d5162  PUSH 0x2710
005d5167  CALL 0x0062fbf0
005d516c  ADD ESP,0x4
005d516f  MOV dword ptr [EBP + -0xc],EAX
005d5172  PUSH 0x2710
005d5177  CALL 0x0062fbf0
005d517c  ADD ESP,0x4
005d517f  MOV dword ptr [EBP + -0x14],EAX
005d5182  MOV EDX,dword ptr [EBP + -0x14]
005d5185  PUSH EDX
005d5186  MOV EAX,dword ptr [EBP + -0xc]
005d5189  PUSH EAX
005d518a  MOV ECX,dword ptr [EBP + -0x4]
005d518d  PUSH ECX
005d518e  MOV EDX,dword ptr [EBP + -0x18]
005d5191  PUSH EDX
005d5192  PUSH 0x6d3d08
005d5197  MOV EAX,dword ptr [EBP + -0x1c]
005d519a  ADD EAX,0x10
005d519d  PUSH EAX
005d519e  CALL dword ptr [0x006b2220]
005d51a4  ADD ESP,0x18
005d51a7  MOV ECX,dword ptr [EBP + -0x1c]
005d51aa  MOV byte ptr [ECX + 0x28],0x1
005d51ae  MOV EDX,dword ptr [EBP + -0x1c]
005d51b1  MOV byte ptr [EDX + 0x29],0x0
005d51b5  MOV EAX,dword ptr [EBP + -0x1c]
005d51b8  MOV byte ptr [EAX + 0x2a],0x0
005d51bc  MOV ECX,dword ptr [EBP + -0x1c]
005d51bf  MOV byte ptr [ECX + 0x30],0x1
005d51c3  MOV EDX,dword ptr [EBP + -0x1c]
005d51c6  MOV byte ptr [EDX + 0x5d],0x1
005d51ca  MOV dword ptr [EBP + -0x8],0x0
005d51d1  JMP 0x005d51dc
005d51d3  MOV EAX,dword ptr [EBP + -0x8]
005d51d6  ADD EAX,0x1
005d51d9  MOV dword ptr [EBP + -0x8],EAX
005d51dc  CMP dword ptr [EBP + -0x8],0x16
005d51e0  JGE 0x005d51f8
005d51e2  MOV ECX,dword ptr [EBP + -0x1c]
005d51e5  ADD ECX,dword ptr [EBP + -0x8]
005d51e8  MOV byte ptr [ECX + 0x31],0x1
005d51ec  MOV EDX,dword ptr [EBP + -0x1c]
005d51ef  ADD EDX,dword ptr [EBP + -0x8]
005d51f2  MOV byte ptr [EDX + 0x47],0x0
005d51f6  JMP 0x005d51d3
005d51f8  MOV EAX,dword ptr [EBP + -0x1c]
005d51fb  MOV byte ptr [EAX + 0x3f],0x0
005d51ff  MOV ECX,dword ptr [EBP + -0x1c]
005d5202  MOV dword ptr [ECX + 0x2c],0x0
005d5209  MOV EDX,dword ptr [EBP + -0x1c]
005d520c  MOV byte ptr [EDX + 0x5e],0x2
005d5210  MOV dword ptr [EBP + -0x8],0x0
005d5217  JMP 0x005d5222
005d5219  MOV EAX,dword ptr [EBP + -0x8]
005d521c  ADD EAX,0x1
005d521f  MOV dword ptr [EBP + -0x8],EAX
005d5222  CMP dword ptr [EBP + -0x8],0x64
005d5226  JGE 0x005d52c7
005d522c  MOV ECX,dword ptr [EBP + -0x8]
005d522f  IMUL ECX,ECX,0x24
005d5232  MOV EDX,dword ptr [EBP + -0x1c]
005d5235  MOV byte ptr [EDX + ECX*0x1 + 0x60],0xff
005d523a  MOV EAX,dword ptr [EBP + -0x8]
005d523d  IMUL EAX,EAX,0x24
005d5240  MOV ECX,dword ptr [EBP + -0x1c]
005d5243  MOV byte ptr [ECX + EAX*0x1 + 0x61],0x1
005d5248  MOV EDX,dword ptr [EBP + -0x8]
005d524b  IMUL EDX,EDX,0x24
005d524e  MOV EAX,dword ptr [EBP + -0x1c]
005d5251  MOV byte ptr [EAX + EDX*0x1 + 0x62],0x1
005d5256  MOV ECX,dword ptr [EBP + -0x8]
005d5259  IMUL ECX,ECX,0x24
005d525c  MOV EDX,dword ptr [EBP + -0x1c]
005d525f  MOV byte ptr [EDX + ECX*0x1 + 0x63],0x0
005d5264  MOV EAX,dword ptr [EBP + -0x8]
005d5267  IMUL EAX,EAX,0x24
005d526a  MOV ECX,dword ptr [EBP + -0x1c]
005d526d  MOV byte ptr [ECX + EAX*0x1 + 0x64],0x0
005d5272  MOV EDX,dword ptr [EBP + -0x8]
005d5275  IMUL EDX,EDX,0x24
005d5278  MOV EAX,dword ptr [EBP + -0x1c]
005d527b  MOV dword ptr [EAX + EDX*0x1 + 0x7c],0x0
005d5283  MOV ECX,dword ptr [EBP + -0x8]
005d5286  IMUL ECX,ECX,0x24
005d5289  MOV EDX,dword ptr [EBP + -0x1c]
005d528c  MOV dword ptr [EDX + ECX*0x1 + 0x80],0xfffffc18
005d5297  MOV dword ptr [EBP + -0x20],0x0
005d529e  JMP 0x005d52a9
005d52a0  MOV EAX,dword ptr [EBP + -0x20]
005d52a3  ADD EAX,0x1
005d52a6  MOV dword ptr [EBP + -0x20],EAX
005d52a9  CMP dword ptr [EBP + -0x20],0x14
005d52ad  JGE 0x005d52c2
005d52af  MOV ECX,dword ptr [EBP + -0x8]
005d52b2  IMUL ECX,ECX,0x24
005d52b5  ADD ECX,dword ptr [EBP + -0x20]
005d52b8  MOV EDX,dword ptr [EBP + -0x1c]
005d52bb  MOV byte ptr [EDX + ECX*0x1 + 0x65],0x0
005d52c0  JMP 0x005d52a0
005d52c2  JMP 0x005d5219
005d52c7  MOV EAX,dword ptr [EBP + -0x1c]
005d52ca  MOV dword ptr [EAX + 0x8],0x0
005d52d1  MOV ECX,dword ptr [EBP + -0x1c]
005d52d4  MOV dword ptr [ECX + 0xc],0x0
005d52db  MOV ESP,EBP
005d52dd  POP EBP
005d52de  RET
