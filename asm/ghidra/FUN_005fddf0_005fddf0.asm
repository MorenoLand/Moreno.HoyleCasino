; FUN_005fddf0  005fddf0
005fddf0  PUSH EBP
005fddf1  MOV EBP,ESP
005fddf3  SUB ESP,0x20
005fddf6  PUSH ESI
005fddf7  MOV dword ptr [EBP + -0xc],ECX
005fddfa  MOV dword ptr [EBP + -0x8],0x0
005fde01  MOV EAX,dword ptr [EBP + -0xc]
005fde04  CMP dword ptr [EAX + 0x1bc],0x0
005fde0b  JZ 0x005fde1f
005fde0d  MOV ECX,dword ptr [EBP + 0x8]
005fde10  SUB ECX,0x5
005fde13  MOV dword ptr [EBP + 0x8],ECX
005fde16  MOV EDX,dword ptr [EBP + 0xc]
005fde19  SUB EDX,0x5
005fde1c  MOV dword ptr [EBP + 0xc],EDX
005fde1f  MOV EAX,dword ptr [EBP + 0x10]
005fde22  MOV dword ptr [EBP + -0x10],EAX
005fde25  CMP dword ptr [EBP + -0x10],0x1
005fde29  JZ 0x005fde2d
005fde2b  JMP 0x005fde3d
005fde2d  MOV ECX,dword ptr [EBP + -0xc]
005fde30  CALL 0x005fed00
005fde35  MOV ECX,dword ptr [EBP + 0xc]
005fde38  SUB ECX,EAX
005fde3a  MOV dword ptr [EBP + 0xc],ECX
005fde3d  MOV ECX,dword ptr [EBP + -0xc]
005fde40  CALL 0x005fed00
005fde45  MOV ESI,EAX
005fde47  ADD ESI,dword ptr [EBP + 0xc]
005fde4a  MOV EDX,dword ptr [0x015e55e8]
005fde50  MOV ECX,dword ptr [EDX + 0x14]
005fde53  CALL 0x005f8570
005fde58  CMP ESI,EAX
005fde5a  JLE 0x005fde80
005fde5c  MOV ECX,dword ptr [EBP + -0xc]
005fde5f  CALL 0x005fed00
005fde64  MOV ESI,EAX
005fde66  MOV EAX,[0x015e55e8]
005fde6b  MOV ECX,dword ptr [EAX + 0x14]
005fde6e  CALL 0x005f8570
005fde73  SUB EAX,dword ptr [EBP + 0xc]
005fde76  SUB ESI,EAX
005fde78  MOV ECX,dword ptr [EBP + 0xc]
005fde7b  SUB ECX,ESI
005fde7d  MOV dword ptr [EBP + 0xc],ECX
005fde80  MOV EDX,dword ptr [EBP + 0xc]
005fde83  SUB EDX,dword ptr [0x006d6eb8]
005fde89  PUSH EDX
005fde8a  MOV EAX,dword ptr [EBP + 0x8]
005fde8d  SUB EAX,dword ptr [0x006d6eb4]
005fde93  PUSH EAX
005fde94  MOV ECX,dword ptr [EBP + -0xc]
005fde97  CALL 0x005f8420
005fde9c  MOV ECX,dword ptr [EBP + -0x8]
005fde9f  ADD ECX,dword ptr [0x006d6eb8]
005fdea5  MOV dword ptr [EBP + -0x8],ECX
005fdea8  PUSH 0x0
005fdeaa  MOV ECX,dword ptr [EBP + -0xc]
005fdead  CALL 0x005fb2b0
005fdeb2  MOV dword ptr [EBP + -0x14],EAX
005fdeb5  MOV EDX,dword ptr [EBP + -0x8]
005fdeb8  PUSH EDX
005fdeb9  MOV EAX,[0x006d6eb4]
005fdebe  PUSH EAX
005fdebf  MOV ECX,dword ptr [EBP + -0x14]
005fdec2  MOV EDX,dword ptr [ECX]
005fdec4  MOV ECX,dword ptr [EBP + -0x14]
005fdec7  MOV EAX,dword ptr [EDX + 0x44]
005fdeca  CALL EAX
005fdecc  PUSH 0x0
005fdece  MOV ECX,dword ptr [EBP + -0xc]
005fded1  CALL 0x005fb2b0
005fded6  MOV ECX,EAX
005fded8  CALL 0x005f5590
005fdedd  MOV ESI,EAX
005fdedf  PUSH 0x0
005fdee1  MOV ECX,dword ptr [EBP + -0xc]
005fdee4  CALL 0x005fb2b0
005fdee9  MOV ECX,EAX
005fdeeb  CALL 0x005eb4b0
005fdef0  ADD EAX,dword ptr [EBP + -0x8]
005fdef3  ADD EAX,ESI
005fdef5  MOV dword ptr [EBP + -0x8],EAX
005fdef8  MOV dword ptr [EBP + -0x4],0x0
005fdeff  JMP 0x005fdf0a
005fdf01  MOV ECX,dword ptr [EBP + -0x4]
005fdf04  ADD ECX,0x1
005fdf07  MOV dword ptr [EBP + -0x4],ECX
005fdf0a  MOV ECX,dword ptr [EBP + -0xc]
005fdf0d  CALL 0x005feda0
005fdf12  CMP dword ptr [EBP + -0x4],EAX
005fdf15  JGE 0x005fdf59
005fdf17  MOV EDX,dword ptr [EBP + -0x4]
005fdf1a  PUSH EDX
005fdf1b  MOV ECX,dword ptr [EBP + -0xc]
005fdf1e  CALL 0x005ff080
005fdf23  MOV dword ptr [EBP + -0x18],EAX
005fdf26  MOV EAX,dword ptr [EBP + -0x8]
005fdf29  PUSH EAX
005fdf2a  MOV ECX,dword ptr [0x006d6eb4]
005fdf30  PUSH ECX
005fdf31  MOV EDX,dword ptr [EBP + -0x18]
005fdf34  MOV EAX,dword ptr [EDX]
005fdf36  MOV ECX,dword ptr [EBP + -0x18]
005fdf39  MOV EDX,dword ptr [EAX + 0x44]
005fdf3c  CALL EDX
005fdf3e  MOV EAX,dword ptr [EBP + -0x4]
005fdf41  PUSH EAX
005fdf42  MOV ECX,dword ptr [EBP + -0xc]
005fdf45  CALL 0x005ff080
005fdf4a  MOV ECX,EAX
005fdf4c  CALL 0x005f5590
005fdf51  ADD EAX,dword ptr [EBP + -0x8]
005fdf54  MOV dword ptr [EBP + -0x8],EAX
005fdf57  JMP 0x005fdf01
005fdf59  PUSH 0x1
005fdf5b  MOV ECX,dword ptr [EBP + -0xc]
005fdf5e  CALL 0x005fb2b0
005fdf63  MOV dword ptr [EBP + -0x1c],EAX
005fdf66  MOV ECX,dword ptr [EBP + -0x8]
005fdf69  PUSH ECX
005fdf6a  MOV EDX,dword ptr [0x006d6eb4]
005fdf70  PUSH EDX
005fdf71  MOV EAX,dword ptr [EBP + -0x1c]
005fdf74  MOV EDX,dword ptr [EAX]
005fdf76  MOV ECX,dword ptr [EBP + -0x1c]
005fdf79  MOV EAX,dword ptr [EDX + 0x44]
005fdf7c  CALL EAX
005fdf7e  PUSH 0x2
005fdf80  MOV ECX,dword ptr [EBP + -0xc]
005fdf83  CALL 0x005fb630
005fdf88  TEST EAX,EAX
005fdf8a  JZ 0x005fdfde
005fdf8c  PUSH 0x2
005fdf8e  MOV ECX,dword ptr [EBP + -0xc]
005fdf91  CALL 0x005fb630
005fdf96  MOV dword ptr [EBP + -0x20],EAX
005fdf99  PUSH 0x0
005fdf9b  PUSH 0x0
005fdf9d  MOV ECX,dword ptr [EBP + -0x20]
005fdfa0  MOV EDX,dword ptr [ECX]
005fdfa2  MOV ECX,dword ptr [EBP + -0x20]
005fdfa5  MOV EAX,dword ptr [EDX + 0x44]
005fdfa8  CALL EAX
005fdfaa  MOV ECX,dword ptr [EBP + -0xc]
005fdfad  CALL 0x005f8550
005fdfb2  PUSH EAX
005fdfb3  PUSH 0x2
005fdfb5  MOV ECX,dword ptr [EBP + -0xc]
005fdfb8  CALL 0x005fb630
005fdfbd  MOV ECX,EAX
005fdfbf  CALL 0x005f5530
005fdfc4  MOV ECX,dword ptr [EBP + -0xc]
005fdfc7  CALL 0x005f8570
005fdfcc  PUSH EAX
005fdfcd  PUSH 0x2
005fdfcf  MOV ECX,dword ptr [EBP + -0xc]
005fdfd2  CALL 0x005fb630
005fdfd7  MOV ECX,EAX
005fdfd9  CALL 0x005f5570
005fdfde  POP ESI
005fdfdf  MOV ESP,EBP
005fdfe1  POP EBP
005fdfe2  RET 0xc
