// FUN_006596d0  006596d0

uint __fastcall FUN_006596d0(int param_1)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  int iVar3;
  uint local_8;
  
  local_8 = 0;
  while ((int)local_8 < 0xc) {
    if ((*(int *)(param_1 + 0x60c + local_8 * 4) != 0) &&
       (uVar2 = FUN_00600230(), (uVar2 & 0xff) != 0)) {
      return uVar2 & 0xffffff00;
    }
    in_EAX = local_8 + 1;
    local_8 = in_EAX;
  }
  local_8 = 0;
  do {
    if (0xb < (int)local_8) {
      return in_EAX & 0xffffff00;
    }
    FUN_00606350(local_8);
    cVar1 = FUN_005f54a0();
    if (cVar1 != '\0') {
      FUN_00606350(local_8);
      cVar1 = FUN_006026d0();
      if (cVar1 != '\0') {
        FUN_00606350(local_8);
        cVar1 = FUN_00600230();
        if ((cVar1 != '\0') && (iVar3 = FUN_00606570(), iVar3 == 0x3ff)) {
          return 0x301;
        }
      }
    }
    in_EAX = local_8 + 1;
    local_8 = in_EAX;
  } while( true );
}

