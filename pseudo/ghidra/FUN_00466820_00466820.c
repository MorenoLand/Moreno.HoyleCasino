// FUN_00466820  00466820

void __fastcall FUN_00466820(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 local_194 [64];
  undefined1 local_154 [67];
  char local_111;
  int local_110;
  char local_10c [256];
  uint local_c;
  undefined1 local_8 [4];
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_0047ce00(&local_110,local_8);
  FUN_0047bc40(local_110 / 2);
  FUN_0047bc80(local_110 / 2);
  FUN_0047bcc0(local_110);
  FUN_0047bd40(local_110);
  FUN_0047bd80(local_110);
  FUN_0047bd00(local_110 << 1);
  FUN_0047bdc0(local_110 << 1);
  FUN_006311e0(local_110,local_194);
  FUN_006311e0(local_110 << 1,local_154);
  local_111 = FUN_00480f80();
  if (local_111 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x1e0) + 0x44))(5,0x2b);
    uVar1 = FUN_00630f40("SID_POKER_DEAL");
    (**(code **)(**(int **)(param_1 + 0x1e0) + 0xe0))(uVar1);
    FUN_006026f0(100);
    (**(code **)(**(int **)(param_1 + 0x1ec) + 0x70))();
    uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_DEAL_INFO");
    (**(code **)(**(int **)(param_1 + 0x1fc) + 0xb4))(uVar1);
    (**(code **)(**(int **)(param_1 + 0x1fc) + 0x74))();
  }
  else {
    uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_WATCH");
    (**(code **)(**(int **)(param_1 + 0x1e0) + 0xe0))(uVar1);
    FUN_006026f0(0x77);
    (**(code **)(**(int **)(param_1 + 0x1e0) + 0x44))(5,0x1e);
    (**(code **)(**(int **)(param_1 + 0x1ec) + 0x44))(5,0x3a);
    (**(code **)(**(int **)(param_1 + 0x1ec) + 0x74))();
    uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_WATCH_INFO");
    (**(code **)(**(int **)(param_1 + 0x1fc) + 0xb4))(uVar1);
    (**(code **)(**(int **)(param_1 + 0x1fc) + 0x74))();
  }
  if (*(char *)(param_1 + 0x200) == '\0') {
    (**(code **)(**(int **)(param_1 + 0x1f0) + 0x70))();
    pcVar2 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_EARLYROUNDBET_FORMAT",local_194);
    sprintf(local_10c,pcVar2);
    (**(code **)(**(int **)(param_1 + 500) + 0xb4))(local_10c);
    (**(code **)(**(int **)(param_1 + 500) + 0x44))(0x58,0x28);
    FUN_005ef310(0x30);
    (**(code **)(**(int **)(param_1 + 500) + 0x74))();
    pcVar2 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_LATEROUNDBET_FORMAT",local_154);
    sprintf(local_10c,pcVar2);
    (**(code **)(**(int **)(param_1 + 0x1f8) + 0xb4))(local_10c);
    (**(code **)(**(int **)(param_1 + 0x1f8) + 0x44))(0x58,0x3a);
    FUN_005ef310(0x30);
    (**(code **)(**(int **)(param_1 + 0x1f8) + 0x74))();
  }
  else {
    uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_STAKESRAISED");
    (**(code **)(**(int **)(param_1 + 0x1f0) + 0xb4))(uVar1);
    (**(code **)(**(int **)(param_1 + 0x1f0) + 0x44))(0x58,0x21);
    FUN_005ef310(0x30);
    (**(code **)(**(int **)(param_1 + 0x1f0) + 0x74))();
    pcVar2 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_EARLYROUNDBET_FORMAT",local_194);
    sprintf(local_10c,pcVar2);
    (**(code **)(**(int **)(param_1 + 500) + 0xb4))(local_10c);
    (**(code **)(**(int **)(param_1 + 500) + 0x44))(0x58,0x31);
    FUN_005ef310(0x30);
    (**(code **)(**(int **)(param_1 + 500) + 0x74))();
    pcVar2 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_LATEROUNDBET_FORMAT",local_154);
    sprintf(local_10c,pcVar2);
    (**(code **)(**(int **)(param_1 + 0x1f8) + 0xb4))(local_10c);
    (**(code **)(**(int **)(param_1 + 0x1f8) + 0x44))(0x58,0x41);
    FUN_005ef310(0x30);
    (**(code **)(**(int **)(param_1 + 0x1f8) + 0x74))();
  }
  FUN_005f85d0();
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

