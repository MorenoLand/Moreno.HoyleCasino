// FUN_004dd780  004dd780

undefined4 __thiscall FUN_004dd780(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = FUN_00463e50(param_1,0);
  if ((iVar1 < 0) || (0x33 < iVar1)) {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerPlayer.cpp",0x1c39);
  }
  iVar2 = iVar1 / 0xd;
  iVar1 = iVar1 % 0xd;
  local_c = 0;
  if (iVar2 == 0) {
    local_c = DAT_0079076c;
  }
  else if (iVar2 == 1) {
    local_c = DAT_00790770;
  }
  else if (iVar2 == 2) {
    local_c = DAT_00790764;
  }
  else if (iVar2 == 3) {
    local_c = DAT_00790754;
  }
  local_10 = 0;
  if (iVar1 == 0) {
    local_10 = DAT_007907a4;
  }
  else if (iVar1 == 1) {
    local_10 = DAT_00790758;
  }
  else if (iVar1 == 2) {
    local_10 = DAT_00790768;
  }
  else if (iVar1 == 3) {
    local_10 = DAT_00790790;
  }
  else if (iVar1 == 4) {
    local_10 = DAT_00790750;
  }
  else if (iVar1 == 5) {
    local_10 = DAT_0079079c;
  }
  else if (iVar1 == 6) {
    local_10 = DAT_00790760;
  }
  else if (iVar1 == 7) {
    local_10 = DAT_00790798;
  }
  else if (iVar1 == 8) {
    local_10 = DAT_00790794;
  }
  else if (iVar1 == 9) {
    local_10 = DAT_00790788;
  }
  else if (iVar1 == 10) {
    local_10 = DAT_00790774;
  }
  else if (iVar1 == 0xb) {
    local_10 = DAT_007907b0;
  }
  else if (iVar1 == 0xc) {
    local_10 = DAT_007907a8;
  }
  FUN_00464130(local_10,local_c);
  return param_2;
}

