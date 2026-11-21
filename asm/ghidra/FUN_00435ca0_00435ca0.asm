; FUN_00435ca0  00435ca0
00435ca0  PUSH EBP
00435ca1  MOV EBP,ESP
00435ca3  SUB ESP,0x8
00435ca6  MOV dword ptr [EBP + -0x4],ECX
00435ca9  CMP dword ptr [EBP + 0x8],0x1
00435cad  JZ 0x00435cdc
00435caf  CMP dword ptr [EBP + 0x8],0x19
00435cb3  JZ 0x00435cdc
00435cb5  CMP dword ptr [EBP + 0x8],0x1a
00435cb9  JZ 0x00435cdc
00435cbb  CMP dword ptr [EBP + 0x8],0x1b
00435cbf  JZ 0x00435cdc
00435cc1  CMP dword ptr [EBP + 0x8],0x1c
00435cc5  JZ 0x00435cdc
00435cc7  CMP dword ptr [EBP + 0x8],0x1d
00435ccb  JZ 0x00435cdc
00435ccd  CMP dword ptr [EBP + 0x8],0x1e
00435cd1  JZ 0x00435cdc
00435cd3  MOV dword ptr [EBP + -0x8],0x0
00435cda  JMP 0x00435ce3
00435cdc  MOV dword ptr [EBP + -0x8],0x1
00435ce3  MOV AL,byte ptr [EBP + -0x8]
00435ce6  MOV ESP,EBP
00435ce8  POP EBP
00435ce9  RET 0x4
