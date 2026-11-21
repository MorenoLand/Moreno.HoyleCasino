// FUN_006112f0  006112f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006112f0(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  float local_1c;
  char local_15;
  undefined *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  FUN_00612690(DAT_015e55f4,&DAT_015e55f0);
  FUN_00612690(DAT_015e55f8,&DAT_015e55f0);
  while (cVar2 = FUN_006118f0(&local_14), cVar2 == '\0') {
    local_15 = '\0';
    iVar3 = FUN_00611c10();
    uVar1 = local_8;
    iVar4 = local_c;
    if (*(int *)(iVar3 + 0x30) < 0) {
      FUN_00611c50();
      local_24 = iVar4;
      local_20 = uVar1;
    }
    else {
      iVar4 = FUN_00611c10();
      if (*(char *)(iVar4 + 0xc) == '\0') {
        iVar4 = FUN_00611c10();
        cVar2 = FUN_00609650(*(undefined4 *)(iVar4 + 0x30));
        if (cVar2 != '\0') {
          local_15 = '\x01';
        }
      }
      iVar4 = FUN_00611c10();
      if (*(int *)(iVar4 + 0x34) != 0) {
        iVar4 = FUN_00611c10();
        iVar3 = FUN_00611c10();
        iVar5 = FUN_00611c10();
        iVar6 = FUN_005f3e50();
        local_1c = (float)(iVar6 - *(int *)(iVar4 + 0x34)) * *(float *)(iVar3 + 0x38) +
                   *(float *)(iVar5 + 0x3c);
        iVar4 = FUN_00611c10();
        if ((*(float *)(iVar4 + 0x38) <= (float)_DAT_006b2c50) ||
           (iVar4 = FUN_00611c10(),
           *(float *)(iVar4 + 0x40) < local_1c == (*(float *)(iVar4 + 0x40) == local_1c))) {
          iVar4 = FUN_00611c10();
          if ((*(float *)(iVar4 + 0x38) < (float)_DAT_006b2c50) &&
             (iVar4 = FUN_00611c10(), local_1c <= *(float *)(iVar4 + 0x40))) {
            if (local_c == 0) {
              _invalid_parameter_noinfo();
            }
            if (*(uint *)(local_c + 8) <= local_8) {
              _invalid_parameter_noinfo();
            }
            local_1c = *(float *)(local_8 + 0x40);
            if (local_c == 0) {
              _invalid_parameter_noinfo();
            }
            if (*(uint *)(local_c + 8) <= local_8) {
              _invalid_parameter_noinfo();
            }
            *(undefined4 *)(local_8 + 0x34) = 0;
          }
        }
        else {
          iVar4 = FUN_00611c10();
          local_1c = *(float *)(iVar4 + 0x40);
          iVar4 = FUN_00611c10();
          *(undefined4 *)(iVar4 + 0x34) = 0;
        }
        if (local_c == 0) {
          _invalid_parameter_noinfo();
        }
        if (*(uint *)(local_c + 8) <= local_8) {
          _invalid_parameter_noinfo();
        }
        FUN_00608550(*(undefined4 *)(local_8 + 0x30),local_1c);
        if (local_c == 0) {
          _invalid_parameter_noinfo();
        }
        if (*(uint *)(local_c + 8) <= local_8) {
          _invalid_parameter_noinfo();
        }
        if (*(int *)(local_8 + 0x34) == 0) {
          if (local_c == 0) {
            _invalid_parameter_noinfo();
          }
          if (*(uint *)(local_c + 8) <= local_8) {
            _invalid_parameter_noinfo();
          }
          if (*(int *)(local_8 + 0x44) == 1) {
            local_15 = '\x01';
          }
          else if (*(int *)(local_8 + 0x44) == 2) {
            if (local_c == 0) {
              _invalid_parameter_noinfo();
            }
            if (*(uint *)(local_c + 8) <= local_8) {
              _invalid_parameter_noinfo();
            }
            FUN_00609980(*(undefined4 *)(local_8 + 0x30));
          }
          if (local_c == 0) {
            _invalid_parameter_noinfo();
          }
          if (*(uint *)(local_c + 8) <= local_8) {
            _invalid_parameter_noinfo();
          }
          if (local_c == 0) {
            _invalid_parameter_noinfo();
          }
          if (*(uint *)(local_c + 8) <= local_8) {
            _invalid_parameter_noinfo();
          }
          *(undefined4 *)(local_8 + 0x44) = 0;
        }
      }
      if (local_15 == '\0') {
        FUN_00611c50();
      }
      else {
        if (local_c == 0) {
          _invalid_parameter_noinfo();
        }
        if (*(uint *)(local_c + 8) <= local_8) {
          _invalid_parameter_noinfo();
        }
        if (-1 < *(int *)(local_8 + 0x30)) {
          if (local_c == 0) {
            _invalid_parameter_noinfo();
          }
          if (*(uint *)(local_c + 8) <= local_8) {
            _invalid_parameter_noinfo();
          }
          FUN_00609720(*(undefined4 *)(local_8 + 0x30),1);
        }
        FUN_006128b0(&local_2c,local_c,local_8);
        uVar1 = DAT_015e55f8;
        local_c = local_2c;
        local_8 = local_28;
        if (DAT_015e55f8 < DAT_015e55f4) {
          _invalid_parameter_noinfo();
        }
        local_14 = &DAT_015e55f0;
        local_10 = uVar1;
      }
    }
  }
  return;
}

