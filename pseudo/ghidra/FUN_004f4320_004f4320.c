// FUN_004f4320  004f4320

void __thiscall FUN_004f4320(undefined1 *param_1,short param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint *local_88;
  uint *local_84;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a2626;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 < 2) {
    FUN_005e9f20("shNumberOfPlayers >= 2","..\\Casino\\PokerPot.cpp",0x2c,uVar1);
  }
  if (0 < *(short *)(param_1 + 6)) {
    FUN_004f9760();
  }
  param_1[1] = 1;
  *(short *)(param_1 + 6) = param_2;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  pvVar2 = operator_new((int)*(short *)(param_1 + 6));
  *(void **)(param_1 + 0x30) = pvVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_005e9f20("pbFolded","..\\Casino\\PokerPot.cpp",0x3d,uVar1);
  }
  for (local_14 = 0; local_14 < *(short *)(param_1 + 6); local_14 = local_14 + 1) {
    *(undefined1 *)((int)local_14 + *(int *)(param_1 + 0x30)) = 0;
  }
  pvVar2 = operator_new((int)*(short *)(param_1 + 6));
  *(void **)(param_1 + 0x34) = pvVar2;
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_005e9f20("pbAllIn","..\\Casino\\PokerPot.cpp",0x42);
  }
  for (local_14 = 0; local_14 < *(short *)(param_1 + 6); local_14 = local_14 + 1) {
    *(undefined1 *)((int)local_14 + *(int *)(param_1 + 0x34)) = 0;
  }
  pvVar2 = operator_new((int)*(short *)(param_1 + 6));
  *(void **)(param_1 + 0x38) = pvVar2;
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_005e9f20("pbActedThisRound","..\\Casino\\PokerPot.cpp",0x47);
  }
  pvVar2 = operator_new((int)*(short *)(param_1 + 6));
  *(void **)(param_1 + 0x3c) = pvVar2;
  if (*(int *)(param_1 + 0x3c) == 0) {
    FUN_005e9f20("pbInShowdownYet","..\\Casino\\PokerPot.cpp",0x4a);
  }
  for (local_14 = 0; local_14 < *(short *)(param_1 + 6); local_14 = local_14 + 1) {
    *(undefined1 *)((int)local_14 + *(int *)(param_1 + 0x3c)) = 0;
  }
  pvVar2 = operator_new((int)*(short *)(param_1 + 6));
  *(void **)(param_1 + 0x40) = pvVar2;
  if (*(int *)(param_1 + 0x40) == 0) {
    FUN_005e9f20("pbTieNotificationYet","..\\Casino\\PokerPot.cpp",0x4f);
  }
  pvVar2 = operator_new((int)*(short *)(param_1 + 6));
  *(void **)(param_1 + 0x44) = pvVar2;
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_005e9f20("pbHighWinner","..\\Casino\\PokerPot.cpp",0x52);
  }
  pvVar2 = operator_new((int)*(short *)(param_1 + 6));
  *(void **)(param_1 + 0x48) = pvVar2;
  if (*(int *)(param_1 + 0x48) == 0) {
    FUN_005e9f20("pbLowWinner","..\\Casino\\PokerPot.cpp",0x55);
  }
  pvVar2 = operator_new(-(uint)((int)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 4 >> 0x20) !=
                               0) | (uint)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 4));
  *(void **)(param_1 + 0x68) = pvVar2;
  if (*(int *)(param_1 + 0x68) == 0) {
    FUN_005e9f20("plChipsInPot","..\\Casino\\PokerPot.cpp",0x58);
  }
  for (local_14 = 0; local_14 < *(short *)(param_1 + 6); local_14 = local_14 + 1) {
    *(undefined4 *)(*(int *)(param_1 + 0x68) + local_14 * 4) = 0;
  }
  pvVar2 = operator_new(-(uint)((int)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 4 >> 0x20) !=
                               0) | (uint)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 4));
  *(void **)(param_1 + 0x6c) = pvVar2;
  if (*(int *)(param_1 + 0x6c) == 0) {
    FUN_005e9f20("plBonusChipInterest","..\\Casino\\PokerPot.cpp",0x5d);
  }
  for (local_14 = 0; local_14 < *(short *)(param_1 + 6); local_14 = local_14 + 1) {
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + local_14 * 4) = 0;
  }
  pvVar2 = operator_new(-(uint)((int)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 4 >> 0x20) !=
                               0) | (uint)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 4));
  *(void **)(param_1 + 0x70) = pvVar2;
  if (*(int *)(param_1 + 0x70) == 0) {
    FUN_005e9f20("plShowdownChips","..\\Casino\\PokerPot.cpp",0x62);
  }
  pvVar2 = operator_new(-(uint)((int)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 4 >> 0x20) !=
                               0) | (uint)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 4));
  *(void **)(param_1 + 0x74) = pvVar2;
  if (*(int *)(param_1 + 0x74) == 0) {
    FUN_005e9f20("plHighShowdownChips","..\\Casino\\PokerPot.cpp",0x65);
  }
  pvVar2 = operator_new(-(uint)((int)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 4 >> 0x20) !=
                               0) | (uint)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 4));
  *(void **)(param_1 + 0x78) = pvVar2;
  if (*(int *)(param_1 + 0x78) == 0) {
    FUN_005e9f20("plLowShowdownChips","..\\Casino\\PokerPot.cpp",0x68);
  }
  pvVar2 = operator_new(-(uint)((int)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 2 >> 0x20) !=
                               0) | (uint)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 2));
  *(void **)(param_1 + 0x4c) = pvVar2;
  if (*(int *)(param_1 + 0x4c) == 0) {
    FUN_005e9f20("pshLastBetOrRaiseIndex","..\\Casino\\PokerPot.cpp",0x6b);
  }
  for (local_14 = 0; local_14 < *(short *)(param_1 + 6); local_14 = local_14 + 1) {
    *(short *)(*(int *)(param_1 + 0x4c) + local_14 * 2) = local_14;
  }
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_1 + 6);
  pvVar2 = operator_new(-(uint)((int)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 2 >> 0x20) !=
                               0) | (uint)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 2));
  *(void **)(param_1 + 0x5c) = pvVar2;
  if (*(int *)(param_1 + 0x5c) == 0) {
    FUN_005e9f20("pshTotalBetsOrRaises","..\\Casino\\PokerPot.cpp",0x71);
  }
  for (local_14 = 0; local_14 < *(short *)(param_1 + 6); local_14 = local_14 + 1) {
    *(undefined2 *)(*(int *)(param_1 + 0x5c) + local_14 * 2) = 0;
  }
  pvVar2 = operator_new(-(uint)((int)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 2 >> 0x20) !=
                               0) | (uint)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 2));
  *(void **)(param_1 + 0x60) = pvVar2;
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_005e9f20("pshTotalCalls","..\\Casino\\PokerPot.cpp",0x76);
  }
  for (local_14 = 0; local_14 < *(short *)(param_1 + 6); local_14 = local_14 + 1) {
    *(undefined2 *)(*(int *)(param_1 + 0x60) + local_14 * 2) = 0;
  }
  pvVar2 = operator_new(-(uint)((int)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 2 >> 0x20) !=
                               0) | (uint)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 2));
  *(void **)(param_1 + 100) = pvVar2;
  if (*(int *)(param_1 + 100) == 0) {
    FUN_005e9f20("pshTotalChecks","..\\Casino\\PokerPot.cpp",0x7b);
  }
  for (local_14 = 0; local_14 < *(short *)(param_1 + 6); local_14 = local_14 + 1) {
    *(undefined2 *)(*(int *)(param_1 + 100) + local_14 * 2) = 0;
  }
  pvVar2 = operator_new(-(uint)((int)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 2 >> 0x20) !=
                               0) | (uint)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 2));
  *(void **)(param_1 + 0x50) = pvVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_005e9f20("pshBetsOrRaisesThisRound","..\\Casino\\PokerPot.cpp",0x80);
  }
  pvVar2 = operator_new(-(uint)((int)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 2 >> 0x20) !=
                               0) | (uint)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 2));
  *(void **)(param_1 + 0x54) = pvVar2;
  if (*(int *)(param_1 + 0x54) == 0) {
    FUN_005e9f20("pshCallsThisRound","..\\Casino\\PokerPot.cpp",0x83);
  }
  pvVar2 = operator_new(-(uint)((int)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 2 >> 0x20) !=
                               0) | (uint)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 2));
  *(void **)(param_1 + 0x58) = pvVar2;
  if (*(int *)(param_1 + 0x58) == 0) {
    FUN_005e9f20("pshChecksThisRound","..\\Casino\\PokerPot.cpp",0x86);
  }
  uVar3 = (uint)*(short *)(param_1 + 6);
  uVar1 = -(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 4);
  local_84 = operator_new(-(uint)(0xfffffffb < uVar1) | uVar1 + 4);
  local_8 = 0;
  if (local_84 == (uint *)0x0) {
    local_84 = (uint *)0x0;
  }
  else {
    *local_84 = uVar3;
    _eh_vector_constructor_iterator_(local_84 + 1,4,uVar3,FUN_004a20d0,FUN_004a20f0);
    local_84 = local_84 + 1;
  }
  local_8 = 0xffffffff;
  *(uint **)(param_1 + 0x7c) = local_84;
  if (*(int *)(param_1 + 0x7c) == 0) {
    FUN_005e9f20("pphvHigh","..\\Casino\\PokerPot.cpp",0x89);
  }
  uVar1 = (uint)*(short *)(param_1 + 6);
  uVar3 = -(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 4);
  local_88 = operator_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  local_8 = 1;
  if (local_88 == (uint *)0x0) {
    local_88 = (uint *)0x0;
  }
  else {
    *local_88 = uVar1;
    _eh_vector_constructor_iterator_(local_88 + 1,4,uVar1,FUN_004a20d0,FUN_004a20f0);
    local_88 = local_88 + 1;
  }
  local_8 = 0xffffffff;
  *(uint **)(param_1 + 0x80) = local_88;
  if (*(int *)(param_1 + 0x80) == 0) {
    FUN_005e9f20("pphvLow","..\\Casino\\PokerPot.cpp",0x8c);
  }
  pvVar2 = operator_new(-(uint)((int)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 4 >> 0x20) !=
                               0) | (uint)((ulonglong)(uint)(int)*(short *)(param_1 + 6) * 4));
  *(void **)(param_1 + 0x84) = pvVar2;
  if (*(int *)(param_1 + 0x84) == 0) {
    FUN_005e9f20("pdeclShowdown","..\\Casino\\PokerPot.cpp",0x8f);
  }
  ExceptionList = local_10;
  return;
}

