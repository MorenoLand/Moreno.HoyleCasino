// FUN_0058e080  0058e080

void __thiscall FUN_0058e080(int *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int local_34c [5];
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  int aiStack_294 [161];
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = -1;
  if (DAT_00793584 != 0) {
    local_34c[0] = *(int *)(DAT_00793584 + 0x2fc);
    local_34c[1] = 0;
    local_34c[2] = *(undefined4 *)(DAT_00793584 + 0x300);
    local_34c[3] = 1;
    local_34c[4] = *(undefined4 *)(DAT_00793584 + 0x304);
    local_338 = 2;
    local_334 = *(undefined4 *)(DAT_00793584 + 0x308);
    local_330 = 3;
    local_32c = *(undefined4 *)(DAT_00793584 + 0x30c);
    local_328 = 4;
    local_324 = *(undefined4 *)(DAT_00793584 + 0x3b6c);
    local_320 = 5;
    local_31c = FUN_005fb5e0(0);
    local_318 = 6;
    local_314 = FUN_005fb5e0(1);
    local_310 = 7;
    local_30c = *(undefined4 *)(DAT_00793584 + 0x3b8c);
    local_308 = 8;
    local_304 = *(undefined4 *)(*(int *)(DAT_00793584 + 0x318) + 0x88);
    local_300 = 9;
    local_2fc = *(undefined4 *)(*(int *)(DAT_00793584 + 0x318) + 0x60);
    local_2f8 = 10;
    local_2f4 = *(undefined4 *)(*(int *)(DAT_00793584 + 0x318) + 0x5c);
    local_2f0 = 0xb;
    local_2ec = *(undefined4 *)(*(int *)(DAT_00793584 + 0x31c) + 0x88);
    local_2e8 = 0xc;
    local_2e4 = *(undefined4 *)(*(int *)(DAT_00793584 + 0x31c) + 0x60);
    local_2e0 = 0xd;
    local_2dc = *(undefined4 *)(*(int *)(DAT_00793584 + 0x31c) + 0x5c);
    local_2d8 = 0xe;
    local_2d4 = *(undefined4 *)(DAT_00793584 + 800);
    local_2d0 = 0xf;
    local_2cc = *(undefined4 *)(DAT_00793584 + 0x3b94);
    local_2c8 = 0x10;
    local_2c4 = *(undefined4 *)(DAT_00793584 + 0x3b90);
    local_2c0 = 0x11;
    local_2bc = *(undefined4 *)(*(int *)(DAT_00793584 + 0x324) + 0x144);
    local_2b8 = 0x12;
    local_2b4 = *(undefined4 *)(*(int *)(DAT_00793584 + 0x324) + 0x148);
    local_2b0 = 0x13;
    local_2ac = *(undefined4 *)(DAT_00793584 + 0x314);
    local_2a8 = 0x14;
    local_2a4 = *(undefined4 *)(DAT_00793584 + 0x3b84);
    local_2a0 = 0x15;
    local_29c = *(undefined4 *)(DAT_00793584 + 0x3b88);
    local_298 = 0x16;
    for (local_10 = 0; local_10 < 0x50; local_10 = local_10 + 1) {
      aiStack_294[local_10 * 2] = *(int *)(DAT_00793584 + 0x1bc + local_10 * 4);
      aiStack_294[local_10 * 2 + 1] = local_10;
    }
    local_c = 0x50;
    for (local_10 = 0; local_10 < local_c; local_10 = local_10 + 1) {
      if (((aiStack_294[local_10 * 2] != 0) &&
          (cVar2 = (**(code **)(*(int *)aiStack_294[local_10 * 2] + 0x84))(param_2), cVar2 != '\0'))
         && (cVar2 = FUN_005f54a0(), cVar2 != '\0')) {
        local_8 = aiStack_294[local_10 * 2 + 1];
        break;
      }
    }
    if ((local_8 < 0) || (0x4f < local_8)) {
      local_8 = -1;
      local_c = 0x17;
      for (local_10 = 0; local_10 < local_c; local_10 = local_10 + 1) {
        if (((local_34c[local_10 * 2] != 0) &&
            (cVar2 = (**(code **)(*(int *)local_34c[local_10 * 2] + 0x84))(param_2), cVar2 != '\0'))
           && (cVar2 = FUN_005f54a0(), cVar2 != '\0')) {
          local_8 = local_34c[local_10 * 2 + 1];
          break;
        }
      }
      if (local_8 == -1) {
        if (*(int *)(param_2 + 0x18) == 3) {
          (**(code **)(*param_1 + 0xb4))(&PTR_006b27f8);
        }
      }
      else {
        switch(local_8) {
        case 0:
          uVar5 = FUN_00630f40("SID_KENO_HELP_NEW");
          (**(code **)(*param_1 + 0xb4))(uVar5);
          break;
        case 1:
          uVar5 = FUN_00630f40("SID_KENO_HELP_DUPLICATE");
          (**(code **)(*param_1 + 0xb4))(uVar5);
          break;
        case 2:
          uVar5 = FUN_00630f40("SID_KENO_HELP_DELETE");
          (**(code **)(*param_1 + 0xb4))(uVar5);
          break;
        case 3:
          uVar5 = FUN_00630f40("SID_KENO_HELP_CLOSE");
          (**(code **)(*param_1 + 0xb4))(uVar5);
          break;
        case 4:
          cVar2 = FUN_006026d0();
          if (cVar2 == '\0') {
            iVar4 = FUN_0058a470();
            if (iVar4 == 0) {
              if ((**(char **)(*(int *)(DAT_00793584 + 0x3b68) + 4) == '\x05') ||
                 (**(char **)(*(int *)(DAT_00793584 + 0x3b68) + 4) == '\x06')) {
                uVar5 = FUN_00630f40("SID_KENO_HELP_ALREADYSUBMITTED");
                (**(code **)(*param_1 + 0xb4))(uVar5);
              }
              else {
                uVar5 = FUN_00630f40("SID_KENO_HELP_PICKATLEASTONE");
                (**(code **)(*param_1 + 0xb4))(uVar5);
              }
            }
            else if ((iVar4 < 0x10) || (0x13 < iVar4)) {
              uVar5 = FUN_00630f40("SID_KENO_HELP_ALREADYSUBMITTED");
              (**(code **)(*param_1 + 0xb4))(uVar5);
            }
            else {
              uVar5 = FUN_00630f40("SID_KENO_HELP_PICKMAX15");
              (**(code **)(*param_1 + 0xb4))(uVar5);
            }
          }
          else {
            uVar5 = FUN_00630f40("SID_KENO_HELP_SUBMIT");
            (**(code **)(*param_1 + 0xb4))(uVar5);
          }
          break;
        case 5:
          iVar4 = FUN_0058a470();
          if (iVar4 == 0) {
            uVar5 = FUN_00630f40("SID_KENO_HELP_USEICONTOSEEPAYOUTS");
            (**(code **)(*param_1 + 0xb4))(uVar5);
          }
          else {
            uVar5 = FUN_00630f40("SID_KENO_HELP_ROLLMOUSETOSEEPAYOUTS");
            (**(code **)(*param_1 + 0xb4))(uVar5);
          }
          break;
        case 6:
          uVar5 = FUN_00630f40("SID_KENO_HELP_SETTIME");
          (**(code **)(*param_1 + 0xb4))(uVar5);
          break;
        case 7:
          FUN_005fb5e0(1);
          cVar2 = FUN_006026d0();
          if (cVar2 == '\0') {
            uVar5 = FUN_00630f40("SID_KENO_HELP_NOTAVAILABLEFORSUBMITTED");
            (**(code **)(*param_1 + 0xb4))(uVar5);
          }
          else {
            uVar5 = FUN_00630f40("SID_KENO_HELP_AUTOPICK");
            (**(code **)(*param_1 + 0xb4))(uVar5);
          }
          break;
        case 8:
          cVar2 = FUN_006026d0();
          if ((cVar2 == '\0') && (cVar2 = FUN_00600230(), cVar2 == '\0')) {
            uVar5 = FUN_00630f40("SID_KENO_HELP_NUMBEROFPICKS");
            (**(code **)(*param_1 + 0xb4))(uVar5);
          }
          else {
            uVar5 = FUN_00630f40("SID_KENO_HELP_SPECIALBOX");
            (**(code **)(*param_1 + 0xb4))(uVar5);
          }
          break;
        case 9:
          uVar5 = FUN_00630f40("SID_KENO_HELP_PLAYERNAME");
          (**(code **)(*param_1 + 0xb4))(uVar5);
          break;
        case 10:
        case 0xb:
          uVar5 = FUN_00630f40("SID_KENO_HELP_MULTIPLEPLAYERS");
          (**(code **)(*param_1 + 0xb4))(uVar5);
          break;
        case 0xc:
          uVar5 = FUN_00630f40("SID_KENO_HELP_PRICEPERGAME");
          (**(code **)(*param_1 + 0xb4))(uVar5);
          break;
        case 0xd:
        case 0xe:
          uVar5 = FUN_00630f40("SID_KENO_HELP_CHANGEPRICEPERGAME");
          (**(code **)(*param_1 + 0xb4))(uVar5);
          break;
        case 0xf:
          uVar5 = FUN_00630f40("SID_KENO_HELP_NUMBEROFGAMES");
          (**(code **)(*param_1 + 0xb4))(uVar5);
          break;
        case 0x10:
          uVar5 = FUN_00630f40("SID_KENO_HELP_PRICETOPLAY");
          (**(code **)(*param_1 + 0xb4))(uVar5);
          break;
        case 0x11:
          uVar5 = FUN_00630f40("SID_KENO_HELP_GAMESVALIDFOR");
          (**(code **)(*param_1 + 0xb4))(uVar5);
          break;
        case 0x12:
        case 0x13:
          uVar5 = FUN_00630f40("SID_KENO_HELP_GAMERESULTS");
          (**(code **)(*param_1 + 0xb4))(uVar5);
          break;
        case 0x14:
          uVar5 = FUN_00630f40("SID_KENO_HELP_VIEWALLTICKETS");
          (**(code **)(*param_1 + 0xb4))(uVar5);
          break;
        case 0x15:
          uVar5 = FUN_00630f40("SID_KENO_HELP_TICKETRATIO");
          (**(code **)(*param_1 + 0xb4))(uVar5);
          break;
        case 0x16:
          uVar5 = FUN_00630f40("SID_KENO_HELP_NETAMOUNT");
          (**(code **)(*param_1 + 0xb4))(uVar5);
          break;
        default:
          FUN_005e9f20("false","..\\Casino\\kenoticketdialog.cpp",0x9a5);
        }
      }
    }
    else {
      cVar2 = FUN_00600230();
      cVar3 = FUN_005f54a0();
      iVar4 = FUN_005fb5e0(1);
      if (((*(int *)(iVar4 + 0x1f0) == 0x30dfc5) ||
          (iVar4 = FUN_005fb5e0(1), *(int *)(iVar4 + 0x1f0) == 0x30dfc6)) ||
         (iVar4 = FUN_005fb5e0(1), *(int *)(iVar4 + 0x1f0) == 0x30dfc7)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        uVar5 = FUN_00630f40("SID_KENO_HELP_NOCHANGE");
        (**(code **)(*param_1 + 0xb4))(uVar5);
      }
      else if ((cVar2 == '\0') || (cVar3 == '\0')) {
        if (cVar2 == '\0') {
          if (cVar3 == '\0') {
            (**(code **)(*param_1 + 0xb4))(&PTR_006b27f8);
          }
          else {
            uVar5 = FUN_00630f40("SID_KENO_HELP_DRAWN");
            (**(code **)(*param_1 + 0xb4))(uVar5);
          }
        }
        else {
          uVar5 = FUN_00630f40("SID_KENO_HELP_SELECTED");
          (**(code **)(*param_1 + 0xb4))(uVar5);
        }
      }
      else {
        uVar5 = FUN_00630f40("SID_KENO_HELP_SELECTEDANDDRAWN");
        (**(code **)(*param_1 + 0xb4))(uVar5);
      }
    }
  }
  return;
}

