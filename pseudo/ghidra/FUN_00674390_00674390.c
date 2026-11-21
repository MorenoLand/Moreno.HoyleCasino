// FUN_00674390  00674390

void FUN_00674390(void)

{
  undefined4 uVar1;
  tm *_Tm;
  int iVar2;
  int *piVar3;
  undefined4 local_160;
  undefined4 local_158;
  undefined1 local_13c [32];
  __time64_t local_11c [2];
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  uVar1 = FUN_00673cb0(local_13c);
  stat64i32(uVar1);
  _Tm = _localtime64(local_11c);
  strftime(local_10c,0x100,"%a %b %d, %Y, %I:%M%p",_Tm);
  FUN_005fb5a0(0,local_10c);
  uVar1 = FUN_00630f40("SID_SHELL_SAVEDON_COLON");
  FUN_005fb5a0(1,uVar1);
  iVar2 = FUN_005e4390();
  if (iVar2 == 0) {
    local_158 = 0;
  }
  else {
    FUN_005e4390();
    local_158 = what();
  }
  FUN_005fb5a0(4,local_158);
  if (*(char *)(DAT_016306d0 + 0x1c4) == '\0') {
    FUN_00674160();
  }
  else {
    piVar3 = (int *)FUN_005fb810(0);
    iVar2 = FUN_005e4390();
    if (iVar2 == 0) {
      local_160 = 0;
    }
    else {
      FUN_005e4390();
      local_160 = what();
    }
    (**(code **)(*piVar3 + 0xb4))(local_160);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

