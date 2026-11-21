; FUN_0052a780  0052a780
0052a780  PUSH EBP
0052a781  MOV EBP,ESP
0052a783  SUB ESP,0xc
0052a786  MOV dword ptr [EBP + -0xc],ECX
0052a789  MOV EAX,[0x007947e0]
0052a78e  MOV ECX,dword ptr [EAX + 0x4f14]
0052a794  MOV dword ptr [EBP + -0x4],ECX
0052a797  MOV EDX,dword ptr [0x00793394]
0052a79d  MOV EAX,dword ptr [EDX]
0052a79f  MOV ECX,dword ptr [0x00793394]
0052a7a5  MOV EDX,dword ptr [EAX + 0x38]
0052a7a8  CALL EDX
0052a7aa  CMP EAX,0x1
0052a7ad  JNZ 0x0052a91f
0052a7b3  MOV EAX,dword ptr [EBP + -0xc]
0052a7b6  MOV dword ptr [EAX + 0x100],0x0
0052a7c0  MOV ECX,dword ptr [0x00793394]
0052a7c6  MOV EDX,dword ptr [ECX]
0052a7c8  MOV ECX,dword ptr [0x00793394]
0052a7ce  MOV EAX,dword ptr [EDX + 0x40]
0052a7d1  CALL EAX
0052a7d3  SUB EAX,0x5
0052a7d6  NEG EAX
0052a7d8  SBB EAX,EAX
0052a7da  AND EAX,0xfffffffd
0052a7dd  ADD EAX,0x35
0052a7e0  MOV dword ptr [EBP + -0x8],EAX
0052a7e3  MOV ECX,dword ptr [EBP + -0xc]
0052a7e6  MOV EDX,dword ptr [EBP + -0x8]
0052a7e9  MOV dword ptr [ECX + 0x104],EDX
0052a7ef  MOV EAX,dword ptr [EBP + -0xc]
0052a7f2  MOV ECX,dword ptr [EBP + -0x8]
0052a7f5  MOV dword ptr [EAX + 0x108],ECX
0052a7fb  MOV EDX,dword ptr [EBP + -0xc]
0052a7fe  MOV EAX,dword ptr [EBP + -0x8]
0052a801  MOV dword ptr [EDX + 0x10c],EAX
0052a807  MOV ECX,dword ptr [EBP + -0xc]
0052a80a  CALL 0x0052d0e0
0052a80f  MOV ECX,dword ptr [EBP + -0xc]
0052a812  MOV dword ptr [ECX + 0x124],EAX
0052a818  MOV ECX,dword ptr [EBP + -0xc]
0052a81b  CALL 0x0052d100
0052a820  MOV EDX,dword ptr [EBP + -0xc]
0052a823  MOV dword ptr [EDX + 0x168],EAX
0052a829  MOV EAX,dword ptr [EBP + -0xc]
0052a82c  MOV dword ptr [EAX + 0x110],0x30efbc
0052a836  MOV ECX,dword ptr [EBP + -0xc]
0052a839  MOV dword ptr [ECX + 0x114],0x30efc1
0052a843  MOV EDX,dword ptr [EBP + -0xc]
0052a846  MOV dword ptr [EDX + 0x118],0x30efbd
0052a850  MOV EAX,dword ptr [EBP + -0xc]
0052a853  MOV dword ptr [EAX + 0x11c],0x30efc4
0052a85d  MOV ECX,dword ptr [EBP + -0xc]
0052a860  MOV dword ptr [ECX + 0x120],0x30efbe
0052a86a  MOV EDX,dword ptr [EBP + -0xc]
0052a86d  MOV dword ptr [EDX + 0x144],0x30efc2
0052a877  MOV EAX,dword ptr [EBP + -0xc]
0052a87a  MOV dword ptr [EAX + 0x148],0x30efc3
0052a884  MOV ECX,dword ptr [EBP + -0xc]
0052a887  MOV dword ptr [ECX + 0x154],0x30f025
0052a891  MOV EDX,dword ptr [EBP + -0xc]
0052a894  MOV dword ptr [EDX + 0x158],0x30f020
0052a89e  MOV EAX,dword ptr [EBP + -0xc]
0052a8a1  MOV dword ptr [EAX + 0x15c],0x30f023
0052a8ab  MOV ECX,dword ptr [EBP + -0xc]
0052a8ae  MOV dword ptr [ECX + 0x160],0x30f024
0052a8b8  MOV EDX,dword ptr [EBP + -0xc]
0052a8bb  MOV dword ptr [EDX + 0x164],0x30f022
0052a8c5  MOV EAX,dword ptr [EBP + -0xc]
0052a8c8  MOV dword ptr [EAX + 0x16c],0x15fca
0052a8d2  MOV ECX,dword ptr [EBP + -0xc]
0052a8d5  MOV dword ptr [ECX + 0x170],0x15fcb
0052a8df  MOV EDX,dword ptr [EBP + -0xc]
0052a8e2  MOV dword ptr [EDX + 0x174],0x15fcc
0052a8ec  MOV EAX,dword ptr [EBP + -0xc]
0052a8ef  MOV byte ptr [EAX + 0x128],0x0
0052a8f6  MOV ECX,dword ptr [EBP + -0xc]
0052a8f9  MOV byte ptr [ECX + 0x129],0x0
0052a900  MOV EDX,dword ptr [EBP + -0xc]
0052a903  MOV dword ptr [EDX + 0x14c],0x16008
0052a90d  MOV EAX,dword ptr [EBP + -0xc]
0052a910  MOV dword ptr [EAX + 0x150],0x1600a
0052a91a  JMP 0x0052aab4
0052a91f  MOV ECX,dword ptr [EBP + -0xc]
0052a922  MOV dword ptr [ECX + 0x100],0xa
0052a92c  MOV EDX,dword ptr [EBP + -0xc]
0052a92f  MOV dword ptr [EDX + 0x104],0x0
0052a939  MOV EAX,dword ptr [EBP + -0xc]
0052a93c  MOV dword ptr [EAX + 0x108],0x0
0052a946  MOV ECX,dword ptr [EBP + -0xc]
0052a949  MOV dword ptr [ECX + 0x10c],0x0
0052a953  MOV ECX,dword ptr [EBP + -0xc]
0052a956  CALL 0x0052d0e0
0052a95b  MOV EDX,dword ptr [EBP + -0xc]
0052a95e  MOV dword ptr [EDX + 0x124],EAX
0052a964  MOV ECX,dword ptr [EBP + -0xc]
0052a967  CALL 0x0052d100
0052a96c  MOV ECX,dword ptr [EBP + -0xc]
0052a96f  MOV dword ptr [ECX + 0x168],EAX
0052a975  MOV EDX,dword ptr [EBP + -0xc]
0052a978  MOV dword ptr [EDX + 0x110],0x15f98
0052a982  MOV EAX,dword ptr [EBP + -0xc]
0052a985  MOV dword ptr [EAX + 0x114],0x15fd2
0052a98f  MOV ECX,dword ptr [EBP + -0xc]
0052a992  MOV dword ptr [ECX + 0x118],0x15f97
0052a99c  MOV EDX,dword ptr [EBP + -0xc]
0052a99f  MOV dword ptr [EDX + 0x11c],0x30efc4
0052a9a9  MOV EAX,dword ptr [EBP + -0xc]
0052a9ac  MOV dword ptr [EAX + 0x120],0x15fc3
0052a9b6  MOV ECX,dword ptr [EBP + -0xc]
0052a9b9  MOV byte ptr [ECX + 0x128],0x1
0052a9c0  MOV EDX,dword ptr [EBP + -0xc]
0052a9c3  MOV dword ptr [EDX + 0x12c],0x15feb
0052a9cd  MOV EAX,dword ptr [EBP + -0xc]
0052a9d0  MOV dword ptr [EAX + 0x130],0x15feb
0052a9da  MOV ECX,dword ptr [EBP + -0xc]
0052a9dd  MOV dword ptr [ECX + 0x134],0x15fef
0052a9e7  MOV EDX,dword ptr [EBP + -0xc]
0052a9ea  MOV byte ptr [EDX + 0x129],0x1
0052a9f1  MOV EAX,dword ptr [EBP + -0xc]
0052a9f4  MOV dword ptr [EAX + 0x138],0x15fea
0052a9fe  MOV ECX,dword ptr [EBP + -0xc]
0052aa01  MOV dword ptr [ECX + 0x13c],0x15fea
0052aa0b  MOV EDX,dword ptr [EBP + -0xc]
0052aa0e  MOV dword ptr [EDX + 0x140],0x15fee
0052aa18  MOV EAX,dword ptr [EBP + -0xc]
0052aa1b  MOV dword ptr [EAX + 0x144],0x15fc1
0052aa25  MOV ECX,dword ptr [EBP + -0xc]
0052aa28  MOV dword ptr [ECX + 0x148],0x15f9e
0052aa32  MOV EDX,dword ptr [EBP + -0xc]
0052aa35  MOV dword ptr [EDX + 0x14c],0x16008
0052aa3f  MOV EAX,dword ptr [EBP + -0xc]
0052aa42  MOV dword ptr [EAX + 0x150],0x1600a
0052aa4c  MOV ECX,dword ptr [EBP + -0xc]
0052aa4f  MOV dword ptr [ECX + 0x154],0x15f91
0052aa59  MOV EDX,dword ptr [EBP + -0xc]
0052aa5c  MOV dword ptr [EDX + 0x158],0x15f92
0052aa66  MOV EAX,dword ptr [EBP + -0xc]
0052aa69  MOV dword ptr [EAX + 0x15c],0x15f93
0052aa73  MOV ECX,dword ptr [EBP + -0xc]
0052aa76  MOV dword ptr [ECX + 0x160],0x15f94
0052aa80  MOV EDX,dword ptr [EBP + -0xc]
0052aa83  MOV dword ptr [EDX + 0x164],0x15f95
0052aa8d  MOV EAX,dword ptr [EBP + -0xc]
0052aa90  MOV dword ptr [EAX + 0x16c],0x15fca
0052aa9a  MOV ECX,dword ptr [EBP + -0xc]
0052aa9d  MOV dword ptr [ECX + 0x170],0x15fcb
0052aaa7  MOV EDX,dword ptr [EBP + -0xc]
0052aaaa  MOV dword ptr [EDX + 0x174],0x15fcc
0052aab4  MOV ESP,EBP
0052aab6  POP EBP
0052aab7  RET
