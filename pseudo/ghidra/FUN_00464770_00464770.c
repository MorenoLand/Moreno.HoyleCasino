// FUN_00464770  00464770

void __thiscall FUN_00464770(short *param_1,undefined4 param_2)

{
  char cVar1;
  ushort *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  if (*param_1 == -1) {
    FUN_005e9f20("usSpades != 0xFFFFu","..\\Casino\\PokerCardBag.cpp",0x2e);
  }
  uVar4 = DAT_0079077c;
  FUN_00464480(&local_5);
  cVar1 = FUN_00464050(uVar4);
  if (cVar1 == '\0') {
    uVar4 = DAT_007907b4;
    FUN_00464480(&local_6);
    cVar1 = FUN_00464050(uVar4);
    if (cVar1 == '\0') {
      puVar2 = (ushort *)FUN_00464c70(param_2);
      pbVar3 = (byte *)FUN_00464480(&local_7);
      *puVar2 = *puVar2 | (ushort)(1 << (*pbVar3 & 0x1f));
    }
    else {
      if (1 < *(byte *)(param_1 + 4)) {
        FUN_005e9f20("ucBugs <= 0x1u","..\\Casino\\PokerCardBag.cpp",0x34);
      }
      *(char *)(param_1 + 4) = (char)param_1[4] + '\x01';
    }
  }
  else {
    *(char *)((int)param_1 + 9) = *(char *)((int)param_1 + 9) + '\x01';
  }
  return;
}

