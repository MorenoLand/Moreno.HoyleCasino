// FUN_006476f0  006476f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_006476f0(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,char param_6
            )

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  char *_Source;
  int iVar6;
  undefined4 uVar7;
  char local_134 [264];
  uint local_2c;
  int local_28;
  double local_24;
  undefined4 local_18;
  undefined1 local_11;
  undefined4 local_10;
  double local_c;
  
  local_2c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_18 = 0xffffffff;
  FUN_0062fde0();
  cVar2 = FUN_00637730();
  if (((cVar2 == '\0') && (*(int *)(param_2 + 4) != 6000)) ||
     (cVar2 = (**(code **)(*DAT_0162ee80 + 0x1f8))(), cVar2 != '\0')) {
    FUN_0062fde0();
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 0x1c))();
    }
  }
  else {
    if (*(int *)(param_2 + 4) < 0) {
      FUN_0062fde0();
    }
    else {
      iVar4 = FUN_00666d90();
      if (iVar4 == 0) {
        FUN_005e9f20();
      }
      else {
        FUN_0062fde0("     situation: %s.\t",iVar4 + 4);
      }
    }
    if (*(int *)(param_2 + 8) < 0) {
      FUN_0062fde0();
    }
    else {
      iVar4 = FUN_00666d90();
      if (iVar4 == 0) {
        FUN_005e9f20();
      }
      else {
        FUN_0062fde0(" situation: %s.\n",iVar4 + 4);
      }
    }
    cVar2 = (**(code **)(*DAT_0162ee84 + 0x37c))();
    cVar3 = (**(code **)(*DAT_0162ee84 + 0x380))(param_2);
    if (cVar3 != '\0' || cVar2 != '\0') {
      FUN_0062fde0();
      if (*(int *)(param_2 + 4) < 0) {
        FUN_0062fde0();
      }
      else {
        iVar4 = FUN_00666d90();
        if (iVar4 == 0) {
          FUN_005e9f20();
        }
        else {
          FUN_0062fde0();
        }
      }
      FUN_0062fde0();
      if (*(int *)(param_2 + 8) < 0) {
        FUN_0062fde0();
      }
      else {
        iVar4 = FUN_00666d90();
        if (iVar4 == 0) {
          FUN_005e9f20();
        }
        else {
          FUN_0062fde0();
        }
      }
      FUN_0062fde0();
      if ((*(int *)(param_2 + 4) == -1) && (*(int *)(param_2 + 8) == -1)) {
        if (param_3 != (int *)0x0) {
          (**(code **)(*param_3 + 0x1c))();
        }
        goto LAB_00647f48;
      }
    }
    piVar5 = (int *)FUN_0063aac0();
    if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (cVar2 = FUN_00648ae0(), cVar2 == '\0')) {
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 0x1c))();
      }
    }
    else if ((*(int *)(param_2 + 4) == -1) && (*(int *)(param_2 + 8) == -1)) {
      FUN_005e9f20();
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 0x1c))();
      }
    }
    else {
      iVar4 = FUN_006377b0();
      local_24 = (double)iVar4 / _DAT_006be518;
      FUN_0062fde0("     attitudeRatio: %f\t importance: %f\t",local_24,
                   *(undefined8 *)(param_2 + 0x18));
      if (*(double *)(param_2 + 0x18) <= _DAT_006b2c38) {
        local_c = (_DAT_006b2c38 - *(double *)(param_2 + 0x18)) / _DAT_006b2c38;
        local_24 = local_24 - local_24 * local_c;
        FUN_0062fde0("     decrement ratio: %f\t decremented attitudeRatio: %f\n",local_c,local_24);
      }
      else {
        local_c = (*(double *)(param_2 + 0x18) - _DAT_006b2c38) / _DAT_006b2c38;
        local_24 = (1.0 - local_24) * local_c + local_24;
        FUN_0062fde0("     increment ratio: %f\t incremented attitudeRatio: %f\n",local_c,local_24);
      }
      iVar4 = FUN_0062fbf0();
      local_11 = (double)iVar4 <= local_24 * _PTR_006b6e18;
      if ((bool)local_11) {
        if (*(int *)(param_2 + 8) == -1) {
          local_10 = *(undefined4 *)(param_2 + 4);
        }
        else if (*(int *)(param_2 + 4) == -1) {
          local_10 = *(undefined4 *)(param_2 + 8);
        }
        else {
          cVar2 = FUN_006371e0();
          if (cVar2 == '\0') {
            local_10 = *(undefined4 *)(param_2 + 8);
          }
          else {
            iVar4 = FUN_0062fbf0();
            if ((double)iVar4 / _PTR_006b6e18 <= *(double *)(param_2 + 0x10)) {
              local_10 = *(undefined4 *)(param_2 + 8);
            }
            else {
              local_10 = *(undefined4 *)(param_2 + 4);
            }
          }
        }
        piVar5 = (int *)FUN_0063aac0();
        if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          _Source = (char *)FUN_0057a470();
          strcpy(local_134,_Source);
          if (local_134[0] == '\0') {
            local_18 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
          }
          else {
            FUN_0057a470();
            local_18 = FUN_00665800();
          }
        }
        else {
          local_18 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
        }
        cVar2 = FUN_006371e0();
        if (cVar2 == '\0') {
          FUN_0062fde0();
          if (param_3 != (int *)0x0) {
            (**(code **)(*param_3 + 0x1c))();
          }
        }
        else {
          if (param_6 != '\0') {
            iVar4 = FUN_00637260(local_10,local_18);
            iVar6 = FUN_0062fbf0();
            if (((iVar6 == 0) && (iVar4 != -1)) && (cVar2 = FUN_00647f60(), cVar2 != '\0'))
            goto LAB_00647f48;
          }
          local_28 = FUN_00637000();
          if (local_28 == -1) {
            FUN_005e9f20();
            if (param_3 != (int *)0x0) {
              (**(code **)(*param_3 + 0x1c))();
            }
          }
          else {
            piVar5 = (int *)FUN_0063aac0();
            if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (!bVar1) {
              uVar7 = (**(code **)(*DAT_0162ee80 + 0x1cc))(param_1,local_10);
              *(undefined4 *)(param_1 + 0x48) = uVar7;
            }
            FUN_00646fa0(local_28,local_10,param_3,param_4,1);
          }
        }
      }
      else {
        FUN_0062fde0();
        if (param_3 != (int *)0x0) {
          (**(code **)(*param_3 + 0x1c))();
        }
      }
    }
  }
LAB_00647f48:
  __security_check_cookie(local_2c ^ (uint)&stack0xfffffffc);
  return;
}

