; FUN_0055f930  0055f930
0055f930  PUSH EBP
0055f931  MOV EBP,ESP
0055f933  SUB ESP,0x8
0055f936  MOV dword ptr [EBP + -0x8],ECX
0055f939  MOV ECX,dword ptr [EBP + -0x8]
0055f93c  CALL 0x005e9e20
0055f941  MOV EAX,dword ptr [EBP + -0x8]
0055f944  MOV dword ptr [EAX],0x6c96fc
0055f94a  MOV dword ptr [EBP + -0x4],0x0
0055f951  JMP 0x0055f95c
0055f953  MOV ECX,dword ptr [EBP + -0x4]
0055f956  ADD ECX,0x1
0055f959  MOV dword ptr [EBP + -0x4],ECX
0055f95c  CMP dword ptr [EBP + -0x4],0x5
0055f960  JGE 0x0055f98e
0055f962  MOV EDX,dword ptr [EBP + -0x4]
0055f965  MOV EAX,dword ptr [EBP + -0x8]
0055f968  MOV dword ptr [EAX + EDX*0x4 + 0x8],0x0
0055f970  MOV ECX,dword ptr [EBP + -0x4]
0055f973  MOV EDX,dword ptr [EBP + -0x8]
0055f976  MOV dword ptr [EDX + ECX*0x4 + 0x1c],0x0
0055f97e  MOV EAX,dword ptr [EBP + -0x4]
0055f981  MOV ECX,dword ptr [EBP + -0x8]
0055f984  MOV dword ptr [ECX + EAX*0x4 + 0x4c],0x0
0055f98c  JMP 0x0055f953
0055f98e  MOV EDX,dword ptr [EBP + -0x8]
0055f991  MOV dword ptr [EDX + 0x74],0x0
0055f998  MOV EAX,dword ptr [EBP + -0x8]
0055f99b  MOV dword ptr [EAX + 0x78],0x0
0055f9a2  MOV ECX,dword ptr [EBP + -0x8]
0055f9a5  MOV dword ptr [ECX + 0x7c],0x0
0055f9ac  MOV EDX,dword ptr [EBP + -0x8]
0055f9af  MOV dword ptr [EDX + 0x80],0x0
0055f9b9  MOV EAX,dword ptr [EBP + -0x8]
0055f9bc  MOV dword ptr [EAX + 0x84],0x0
0055f9c6  MOV ECX,dword ptr [EBP + -0x8]
0055f9c9  MOV dword ptr [ECX + 0x88],0x0
0055f9d3  MOV dword ptr [EBP + -0x4],0x0
0055f9da  JMP 0x0055f9e5
0055f9dc  MOV EDX,dword ptr [EBP + -0x4]
0055f9df  ADD EDX,0x1
0055f9e2  MOV dword ptr [EBP + -0x4],EDX
0055f9e5  CMP dword ptr [EBP + -0x4],0xb
0055f9e9  JGE 0x0055f9fe
0055f9eb  MOV EAX,dword ptr [EBP + -0x4]
0055f9ee  MOV ECX,dword ptr [EBP + -0x8]
0055f9f1  MOV dword ptr [ECX + EAX*0x4 + 0x8c],0x0
0055f9fc  JMP 0x0055f9dc
0055f9fe  MOV EDX,dword ptr [EBP + -0x8]
0055fa01  MOV dword ptr [EDX + 0xb8],0x0
0055fa0b  MOV dword ptr [EBP + -0x4],0x0
0055fa12  JMP 0x0055fa1d
0055fa14  MOV EAX,dword ptr [EBP + -0x4]
0055fa17  ADD EAX,0x1
0055fa1a  MOV dword ptr [EBP + -0x4],EAX
0055fa1d  CMP dword ptr [EBP + -0x4],0x3
0055fa21  JGE 0x0055fa36
0055fa23  MOV ECX,dword ptr [EBP + -0x4]
0055fa26  MOV EDX,dword ptr [EBP + -0x8]
0055fa29  MOV dword ptr [EDX + ECX*0x4 + 0xbc],0x0
0055fa34  JMP 0x0055fa14
0055fa36  MOV EAX,dword ptr [EBP + -0x8]
0055fa39  MOV dword ptr [EAX + 0xc8],0x0
0055fa43  MOV ECX,dword ptr [EBP + -0x8]
0055fa46  MOV dword ptr [ECX + 0xcc],0x0
0055fa50  MOV EDX,dword ptr [EBP + -0x8]
0055fa53  MOV dword ptr [EDX + 0xd0],0x0
0055fa5d  MOV EAX,dword ptr [EBP + -0x8]
0055fa60  MOV dword ptr [EAX + 0xd4],0x0
0055fa6a  MOV ECX,dword ptr [EBP + -0x8]
0055fa6d  MOV dword ptr [ECX + 0xd8],0x0
0055fa77  MOV EDX,dword ptr [EBP + -0x8]
0055fa7a  MOV dword ptr [EDX + 0xdc],0x0
0055fa84  MOV EAX,dword ptr [EBP + -0x8]
0055fa87  MOV dword ptr [EAX + 0xe0],0x0
0055fa91  MOV ECX,dword ptr [EBP + -0x8]
0055fa94  MOV dword ptr [ECX + 0xe4],0x0
0055fa9e  MOV EDX,dword ptr [EBP + -0x8]
0055faa1  MOV dword ptr [EDX + 0xe8],0x0
0055faab  MOV EAX,dword ptr [EBP + -0x8]
0055faae  MOV dword ptr [EAX + 0xec],0x0
0055fab8  MOV ECX,dword ptr [EBP + -0x8]
0055fabb  MOV dword ptr [ECX + 0xf0],0x0
0055fac5  MOV EDX,dword ptr [EBP + -0x8]
0055fac8  MOV dword ptr [EDX + 0xf4],0x0
0055fad2  MOV dword ptr [EBP + -0x4],0x0
0055fad9  JMP 0x0055fae4
0055fadb  MOV EAX,dword ptr [EBP + -0x4]
0055fade  ADD EAX,0x1
0055fae1  MOV dword ptr [EBP + -0x4],EAX
0055fae4  CMP dword ptr [EBP + -0x4],0x5
0055fae8  JGE 0x0055fafa
0055faea  MOV ECX,dword ptr [EBP + -0x4]
0055faed  MOV EDX,dword ptr [EBP + -0x8]
0055faf0  MOV dword ptr [EDX + ECX*0x4 + 0x60],0x0
0055faf8  JMP 0x0055fadb
0055fafa  MOV EAX,dword ptr [EBP + -0x8]
0055fafd  MOV ESP,EBP
0055faff  POP EBP
0055fb00  RET
