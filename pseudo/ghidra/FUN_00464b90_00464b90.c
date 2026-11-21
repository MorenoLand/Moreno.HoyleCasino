// FUN_00464b90  00464b90

undefined4 __thiscall FUN_00464b90(short *param_1,undefined4 param_2)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  ushort *puVar4;
  byte *pbVar5;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  if (*param_1 == -1) {
    FUN_005e9f20("usSpades != 0xFFFFu","..\\Casino\\PokerCardBag.cpp",0x91);
  }
  uVar3 = DAT_0079077c;
  FUN_00464480(&local_5);
  cVar2 = FUN_00464050(uVar3);
  if (cVar2 == '\0') {
    uVar3 = DAT_007907b4;
    FUN_00464480(&local_6);
    cVar2 = FUN_00464050(uVar3);
    if (cVar2 == '\0') {
      puVar4 = (ushort *)FUN_00464d40(param_2);
      uVar1 = *puVar4;
      pbVar5 = (byte *)FUN_00464480(&local_7);
      if (((uint)uVar1 & 1 << (*pbVar5 & 0x1f)) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else if ((char)param_1[4] == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else if (*(char *)((int)param_1 + 9) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

