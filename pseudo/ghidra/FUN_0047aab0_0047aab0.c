// FUN_0047aab0  0047aab0

void FUN_0047aab0(char param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_c;
  
  if (param_1 == '\0') {
    FUN_005f2ba0(0x30e79e);
    piVar2 = (int *)FUN_005f2a60(0x30e79e,0);
    uVar3 = FUN_00630f40("SID_POKER_CHECKORCALL");
    (**(code **)(*piVar2 + 0xe0))(uVar3);
    FUN_005f2ba0(0x30e79f);
    piVar2 = (int *)FUN_005f2a60(0x30e79f,0);
    uVar3 = FUN_00630f40("SID_POKER_OPENORRAISE");
    (**(code **)(*piVar2 + 0xe0))(uVar3);
    FUN_005f2ba0(0x30e7a0);
    cVar1 = FUN_005da7b0();
    if (cVar1 != '\0') {
      FUN_005f2ba0(0x30e7a3);
    }
  }
  else {
    FUN_005f2b20(0x30e79e,1);
    if (param_2 == '\0') {
      local_c = FUN_00630f40("SID_POKER_CALL");
    }
    else {
      local_c = FUN_00630f40("SID_POKER_CHECK");
    }
    piVar2 = (int *)FUN_005f2a60(0x30e79e,0);
    (**(code **)(*piVar2 + 0xe0))(local_c);
    FUN_005f2b20(0x30e79f,1);
    FUN_005f2b20(0x30e7a0,1);
    cVar1 = FUN_005da7b0();
    if (cVar1 != '\0') {
      FUN_005f2b20(0x30e7a3,1);
    }
  }
  return;
}

