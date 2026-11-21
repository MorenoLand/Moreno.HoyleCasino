; FUN_005c43f0  005c43f0
005c43f0  PUSH EBP
005c43f1  MOV EBP,ESP
005c43f3  SUB ESP,0x44
005c43f6  MOV dword ptr [EBP + -0x24],ECX
005c43f9  MOV EAX,dword ptr [EBP + -0x24]
005c43fc  ADD EAX,0x18
005c43ff  MOV dword ptr [EBP + -0xc],EAX
005c4402  MOV ECX,dword ptr [EBP + -0xc]
005c4405  CMP dword ptr [ECX + 0x4],0x0
005c4409  JNZ 0x005c4414
005c440b  MOV dword ptr [EBP + -0x28],0x0
005c4412  JMP 0x005c4426
005c4414  MOV EDX,dword ptr [EBP + -0xc]
005c4417  MOV EAX,dword ptr [EBP + -0xc]
005c441a  MOV ECX,dword ptr [EDX + 0x8]
005c441d  SUB ECX,dword ptr [EAX + 0x4]
005c4420  SAR ECX,0x2
005c4423  MOV dword ptr [EBP + -0x28],ECX
005c4426  MOV EDX,dword ptr [EBP + -0x28]
005c4429  MOV dword ptr [EBP + -0x4],EDX
005c442c  MOV dword ptr [EBP + -0x8],0x0
005c4433  JMP 0x005c443e
005c4435  MOV EAX,dword ptr [EBP + -0x8]
005c4438  ADD EAX,0x1
005c443b  MOV dword ptr [EBP + -0x8],EAX
005c443e  MOV ECX,dword ptr [EBP + -0x8]
005c4441  CMP ECX,dword ptr [EBP + -0x4]
005c4444  JGE 0x005c44f0
005c444a  MOV EDX,dword ptr [EBP + -0x24]
005c444d  ADD EDX,0x18
005c4450  MOV dword ptr [EBP + -0x10],EDX
005c4453  MOV EAX,dword ptr [EBP + -0x10]
005c4456  CMP dword ptr [EAX + 0x4],0x0
005c445a  JNZ 0x005c4465
005c445c  MOV dword ptr [EBP + -0x2c],0x0
005c4463  JMP 0x005c4477
005c4465  MOV ECX,dword ptr [EBP + -0x10]
005c4468  MOV EDX,dword ptr [EBP + -0x10]
005c446b  MOV EAX,dword ptr [ECX + 0x8]
005c446e  SUB EAX,dword ptr [EDX + 0x4]
005c4471  SAR EAX,0x2
005c4474  MOV dword ptr [EBP + -0x2c],EAX
005c4477  MOV ECX,dword ptr [EBP + -0x8]
005c447a  CMP ECX,dword ptr [EBP + -0x2c]
005c447d  JC 0x005c4485
005c447f  CALL dword ptr [0x006b2274]
005c4485  MOV EDX,dword ptr [EBP + -0x10]
005c4488  MOV EAX,dword ptr [EDX + 0x4]
005c448b  MOV ECX,dword ptr [EBP + -0x8]
005c448e  CMP dword ptr [EAX + ECX*0x4],0x0
005c4492  JZ 0x005c44eb
005c4494  MOV EDX,dword ptr [EBP + -0x24]
005c4497  ADD EDX,0x18
005c449a  MOV dword ptr [EBP + -0x14],EDX
005c449d  MOV EAX,dword ptr [EBP + -0x14]
005c44a0  CMP dword ptr [EAX + 0x4],0x0
005c44a4  JNZ 0x005c44af
005c44a6  MOV dword ptr [EBP + -0x30],0x0
005c44ad  JMP 0x005c44c1
005c44af  MOV ECX,dword ptr [EBP + -0x14]
005c44b2  MOV EDX,dword ptr [EBP + -0x14]
005c44b5  MOV EAX,dword ptr [ECX + 0x8]
005c44b8  SUB EAX,dword ptr [EDX + 0x4]
005c44bb  SAR EAX,0x2
005c44be  MOV dword ptr [EBP + -0x30],EAX
005c44c1  MOV ECX,dword ptr [EBP + -0x8]
005c44c4  CMP ECX,dword ptr [EBP + -0x30]
005c44c7  JC 0x005c44cf
005c44c9  CALL dword ptr [0x006b2274]
005c44cf  MOV EDX,dword ptr [EBP + -0x14]
005c44d2  MOV EAX,dword ptr [EDX + 0x4]
005c44d5  MOV ECX,dword ptr [EBP + -0x8]
005c44d8  MOV EDX,dword ptr [EAX + ECX*0x4]
005c44db  MOV dword ptr [EBP + -0x34],EDX
005c44de  MOV EAX,dword ptr [EBP + -0x34]
005c44e1  MOV EDX,dword ptr [EAX]
005c44e3  MOV ECX,dword ptr [EBP + -0x34]
005c44e6  MOV EAX,dword ptr [EDX + 0x70]
005c44e9  CALL EAX
005c44eb  JMP 0x005c4435
005c44f0  MOV ECX,dword ptr [EBP + -0x24]
005c44f3  ADD ECX,0x58
005c44f6  MOV dword ptr [EBP + -0x18],ECX
005c44f9  MOV EDX,dword ptr [EBP + -0x18]
005c44fc  CMP dword ptr [EDX + 0x4],0x0
005c4500  JNZ 0x005c450b
005c4502  MOV dword ptr [EBP + -0x38],0x0
005c4509  JMP 0x005c4522
005c450b  MOV EAX,dword ptr [EBP + -0x18]
005c450e  MOV ECX,dword ptr [EBP + -0x18]
005c4511  MOV EAX,dword ptr [EAX + 0x8]
005c4514  SUB EAX,dword ptr [ECX + 0x4]
005c4517  CDQ
005c4518  MOV ECX,0x34
005c451d  IDIV ECX
005c451f  MOV dword ptr [EBP + -0x38],EAX
005c4522  MOV EDX,dword ptr [EBP + -0x38]
005c4525  MOV dword ptr [EBP + -0x4],EDX
005c4528  MOV dword ptr [EBP + -0x8],0x0
005c452f  JMP 0x005c453a
005c4531  MOV EAX,dword ptr [EBP + -0x8]
005c4534  ADD EAX,0x1
005c4537  MOV dword ptr [EBP + -0x8],EAX
005c453a  MOV ECX,dword ptr [EBP + -0x8]
005c453d  CMP ECX,dword ptr [EBP + -0x4]
005c4540  JGE 0x005c4600
005c4546  MOV EDX,dword ptr [EBP + -0x24]
005c4549  ADD EDX,0x58
005c454c  MOV dword ptr [EBP + -0x1c],EDX
005c454f  MOV EAX,dword ptr [EBP + -0x1c]
005c4552  CMP dword ptr [EAX + 0x4],0x0
005c4556  JNZ 0x005c4561
005c4558  MOV dword ptr [EBP + -0x3c],0x0
005c455f  JMP 0x005c4578
005c4561  MOV ECX,dword ptr [EBP + -0x1c]
005c4564  MOV EDX,dword ptr [EBP + -0x1c]
005c4567  MOV EAX,dword ptr [ECX + 0x8]
005c456a  SUB EAX,dword ptr [EDX + 0x4]
005c456d  CDQ
005c456e  MOV ECX,0x34
005c4573  IDIV ECX
005c4575  MOV dword ptr [EBP + -0x3c],EAX
005c4578  MOV EDX,dword ptr [EBP + -0x8]
005c457b  CMP EDX,dword ptr [EBP + -0x3c]
005c457e  JC 0x005c4586
005c4580  CALL dword ptr [0x006b2274]
005c4586  MOV EAX,dword ptr [EBP + -0x8]
005c4589  IMUL EAX,EAX,0x34
005c458c  MOV ECX,dword ptr [EBP + -0x1c]
005c458f  MOV EDX,dword ptr [ECX + 0x4]
005c4592  CMP dword ptr [EDX + EAX*0x1 + 0x30],0x0
005c4597  JZ 0x005c45fb
005c4599  MOV EAX,dword ptr [EBP + -0x24]
005c459c  ADD EAX,0x58
005c459f  MOV dword ptr [EBP + -0x20],EAX
005c45a2  MOV ECX,dword ptr [EBP + -0x20]
005c45a5  CMP dword ptr [ECX + 0x4],0x0
005c45a9  JNZ 0x005c45b4
005c45ab  MOV dword ptr [EBP + -0x40],0x0
005c45b2  JMP 0x005c45cd
005c45b4  MOV EDX,dword ptr [EBP + -0x20]
005c45b7  MOV EAX,dword ptr [EBP + -0x20]
005c45ba  MOV ECX,dword ptr [EDX + 0x8]
005c45bd  SUB ECX,dword ptr [EAX + 0x4]
005c45c0  MOV EAX,ECX
005c45c2  CDQ
005c45c3  MOV ECX,0x34
005c45c8  IDIV ECX
005c45ca  MOV dword ptr [EBP + -0x40],EAX
005c45cd  MOV EDX,dword ptr [EBP + -0x8]
005c45d0  CMP EDX,dword ptr [EBP + -0x40]
005c45d3  JC 0x005c45db
005c45d5  CALL dword ptr [0x006b2274]
005c45db  MOV EAX,dword ptr [EBP + -0x8]
005c45de  IMUL EAX,EAX,0x34
005c45e1  MOV ECX,dword ptr [EBP + -0x20]
005c45e4  MOV EDX,dword ptr [ECX + 0x4]
005c45e7  MOV EAX,dword ptr [EDX + EAX*0x1 + 0x30]
005c45eb  MOV dword ptr [EBP + -0x44],EAX
005c45ee  MOV ECX,dword ptr [EBP + -0x44]
005c45f1  MOV EDX,dword ptr [ECX]
005c45f3  MOV ECX,dword ptr [EBP + -0x44]
005c45f6  MOV EAX,dword ptr [EDX + 0x70]
005c45f9  CALL EAX
005c45fb  JMP 0x005c4531
005c4600  PUSH 0x5
005c4602  MOV ECX,dword ptr [EBP + -0x24]
005c4605  CALL 0x005c3110
005c460a  MOV ESP,EBP
005c460c  POP EBP
005c460d  RET
