// FUN_005e4080  005e4080

undefined4 __thiscall FUN_005e4080(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_005fb350(3200000);
  cVar1 = FUN_00656230(param_2,uVar2);
  if (cVar1 == '\0') {
    uVar2 = FUN_005fb350(0x30d401);
    cVar1 = FUN_00656230(param_2,uVar2);
    if (cVar1 == '\0') {
      uVar2 = FUN_00655d10(param_2);
    }
    else {
      uVar2 = FUN_00630f40("SID_SHELL_ENVIRONMENT_ROLLOVER_PLAY_ALONE");
      (**(code **)(**(int **)(*(int *)(param_1 + 0x1bc) + 0x6c) + 0xb4))(uVar2);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = FUN_00630f40("SID_SHELL_ENVIRONMENT_ROLLOVER_BET_AMOUNTS");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x1bc) + 0x6c) + 0xb4))(uVar2);
    uVar2 = 1;
  }
  return uVar2;
}

