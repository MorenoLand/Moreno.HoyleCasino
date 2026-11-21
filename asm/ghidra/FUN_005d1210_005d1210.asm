; FUN_005d1210  005d1210
005d1210  PUSH EBP
005d1211  MOV EBP,ESP
005d1213  SUB ESP,0x54
005d1216  MOV dword ptr [EBP + -0x54],ECX
005d1219  MOV EAX,dword ptr [EBP + -0x54]
005d121c  MOV ECX,dword ptr [EAX + 0x8]
005d121f  MOV dword ptr [EBP + -0x2c],ECX
005d1222  MOV EDX,dword ptr [EBP + -0x54]
005d1225  MOV EAX,dword ptr [EDX]
005d1227  MOV ECX,dword ptr [EBP + -0x54]
005d122a  MOV EDX,dword ptr [EAX + 0x4]
005d122d  CALL EDX
005d122f  SUB EAX,dword ptr [EBP + -0x2c]
005d1232  MOV dword ptr [EBP + -0x4],EAX
005d1235  MOV EAX,dword ptr [EBP + -0x54]
005d1238  MOV ECX,dword ptr [EAX + 0x4]
005d123b  MOV dword ptr [EBP + -0x30],ECX
005d123e  MOV EDX,dword ptr [EBP + -0x30]
005d1241  CMP EDX,dword ptr [EBP + -0x4]
005d1244  JL 0x005d127c
005d1246  MOV EAX,dword ptr [EBP + -0x54]
005d1249  MOV ECX,dword ptr [EAX + 0x4]
005d124c  MOV dword ptr [EBP + -0x34],ECX
005d124f  MOV EDX,dword ptr [EBP + -0x34]
005d1252  SUB EDX,dword ptr [EBP + -0x4]
005d1255  PUSH EDX
005d1256  MOV ECX,dword ptr [EBP + -0x54]
005d1259  CALL 0x005d0a20
005d125e  MOV EAX,dword ptr [EBP + -0x54]
005d1261  MOV EDX,dword ptr [EAX]
005d1263  MOV ECX,dword ptr [EBP + -0x54]
005d1266  MOV EAX,dword ptr [EDX + 0x4]
005d1269  CALL EAX
005d126b  MOV dword ptr [EBP + -0x38],EAX
005d126e  MOV ECX,dword ptr [EBP + -0x54]
005d1271  MOV EDX,dword ptr [EBP + -0x38]
005d1274  MOV dword ptr [ECX + 0x8],EDX
005d1277  JMP 0x005d13d7
005d127c  MOV EAX,dword ptr [EBP + -0x54]
005d127f  MOV ECX,dword ptr [EAX + 0x4]
005d1282  MOV dword ptr [EBP + -0x3c],ECX
005d1285  CMP dword ptr [EBP + -0x3c],0x0
005d1289  JZ 0x005d12c5
005d128b  MOV EDX,dword ptr [EBP + -0x54]
005d128e  MOV EAX,dword ptr [EDX + 0x4]
005d1291  MOV dword ptr [EBP + -0x40],EAX
005d1294  MOV ECX,dword ptr [EBP + -0x4]
005d1297  SUB ECX,dword ptr [EBP + -0x40]
005d129a  MOV dword ptr [EBP + -0x4],ECX
005d129d  MOV EDX,dword ptr [EBP + -0x54]
005d12a0  MOV EAX,dword ptr [EDX + 0x8]
005d12a3  MOV dword ptr [EBP + -0x44],EAX
005d12a6  MOV ECX,dword ptr [EBP + -0x54]
005d12a9  MOV EDX,dword ptr [ECX + 0x4]
005d12ac  MOV dword ptr [EBP + -0x48],EDX
005d12af  MOV EAX,dword ptr [EBP + -0x44]
005d12b2  ADD EAX,dword ptr [EBP + -0x48]
005d12b5  MOV ECX,dword ptr [EBP + -0x54]
005d12b8  MOV dword ptr [ECX + 0x8],EAX
005d12bb  PUSH 0x0
005d12bd  MOV ECX,dword ptr [EBP + -0x54]
005d12c0  CALL 0x005d0a20
005d12c5  MOV EDX,dword ptr [EBP + -0x4]
005d12c8  PUSH EDX
005d12c9  LEA EAX,[EBP + -0x18]
005d12cc  PUSH EAX
005d12cd  MOV ECX,dword ptr [EBP + -0x54]
005d12d0  CALL 0x005d0c30
005d12d5  MOV ECX,dword ptr [EAX]
005d12d7  MOV EDX,dword ptr [EAX + 0x4]
005d12da  MOV dword ptr [EBP + -0xc],ECX
005d12dd  MOV dword ptr [EBP + -0x8],EDX
005d12e0  CMP dword ptr [EBP + -0xc],0x0
005d12e4  JNZ 0x005d1308
005d12e6  MOV EAX,dword ptr [EBP + -0x8]
005d12e9  MOV dword ptr [EBP + -0x10],EAX
005d12ec  MOV EAX,dword ptr [EBP + -0x10]
005d12ef  CDQ
005d12f0  MOV ECX,0x64
005d12f5  IDIV ECX
005d12f7  MOV dword ptr [EBP + -0xc],EAX
005d12fa  MOV EAX,dword ptr [EBP + -0x10]
005d12fd  CDQ
005d12fe  MOV ECX,0x64
005d1303  IDIV ECX
005d1305  MOV dword ptr [EBP + -0x8],EDX
005d1308  MOV EDX,dword ptr [EBP + -0x4]
005d130b  PUSH EDX
005d130c  MOV ECX,dword ptr [EBP + -0x54]
005d130f  CALL 0x005d0d60
005d1314  MOVZX EAX,AL
005d1317  TEST EAX,EAX
005d1319  JZ 0x005d1358
005d131b  MOV ECX,dword ptr [EBP + -0x54]
005d131e  MOV EDX,dword ptr [ECX]
005d1320  MOV ECX,dword ptr [EBP + -0x54]
005d1323  MOV EAX,dword ptr [EDX + 0x4]
005d1326  CALL EAX
005d1328  MOV dword ptr [EBP + -0x4c],EAX
005d132b  MOV ECX,dword ptr [EBP + -0x54]
005d132e  MOV EDX,dword ptr [EBP + -0x4c]
005d1331  MOV dword ptr [ECX + 0x8],EDX
005d1334  MOV EAX,dword ptr [EBP + -0xc]
005d1337  IMUL EAX,EAX,-0x1
005d133a  MOV dword ptr [EBP + -0xc],EAX
005d133d  MOV ECX,dword ptr [EBP + -0x8]
005d1340  IMUL ECX,ECX,-0x1
005d1343  MOV dword ptr [EBP + -0x8],ECX
005d1346  MOV EDX,dword ptr [EBP + -0x8]
005d1349  PUSH EDX
005d134a  MOV EAX,dword ptr [EBP + -0xc]
005d134d  PUSH EAX
005d134e  MOV ECX,dword ptr [EBP + -0x54]
005d1351  CALL 0x005d1420
005d1356  JMP 0x005d13d7
005d1358  LEA ECX,[EBP + -0x20]
005d135b  PUSH ECX
005d135c  PUSH 0x0
005d135e  CALL 0x005dcb00
005d1363  ADD ESP,0x4
005d1366  MOV ECX,EAX
005d1368  CALL 0x005d5a90
005d136d  MOV EDX,dword ptr [EAX + 0x4]
005d1370  PUSH EDX
005d1371  MOV EAX,dword ptr [EAX]
005d1373  PUSH EAX
005d1374  MOV ECX,dword ptr [EBP + -0x54]
005d1377  CALL 0x005d0d30
005d137c  MOV dword ptr [EBP + -0x4],EAX
005d137f  CMP dword ptr [EBP + -0x4],0x0
005d1383  JZ 0x005d13d7
005d1385  MOV ECX,dword ptr [EBP + -0x4]
005d1388  PUSH ECX
005d1389  LEA EDX,[EBP + -0x28]
005d138c  PUSH EDX
005d138d  MOV ECX,dword ptr [EBP + -0x54]
005d1390  CALL 0x005d0c30
005d1395  MOV ECX,dword ptr [EAX]
005d1397  MOV EDX,dword ptr [EAX + 0x4]
005d139a  MOV dword ptr [EBP + -0xc],ECX
005d139d  MOV dword ptr [EBP + -0x8],EDX
005d13a0  MOV EAX,dword ptr [EBP + -0xc]
005d13a3  IMUL EAX,EAX,-0x1
005d13a6  MOV dword ptr [EBP + -0xc],EAX
005d13a9  MOV ECX,dword ptr [EBP + -0x8]
005d13ac  IMUL ECX,ECX,-0x1
005d13af  MOV dword ptr [EBP + -0x8],ECX
005d13b2  MOV EDX,dword ptr [EBP + -0x54]
005d13b5  MOV EAX,dword ptr [EDX + 0x8]
005d13b8  MOV dword ptr [EBP + -0x50],EAX
005d13bb  MOV ECX,dword ptr [EBP + -0x50]
005d13be  ADD ECX,dword ptr [EBP + -0x4]
005d13c1  MOV EDX,dword ptr [EBP + -0x54]
005d13c4  MOV dword ptr [EDX + 0x8],ECX
005d13c7  MOV EAX,dword ptr [EBP + -0x8]
005d13ca  PUSH EAX
005d13cb  MOV ECX,dword ptr [EBP + -0xc]
005d13ce  PUSH ECX
005d13cf  MOV ECX,dword ptr [EBP + -0x54]
005d13d2  CALL 0x005d1420
005d13d7  MOV ESP,EBP
005d13d9  POP EBP
005d13da  RET
