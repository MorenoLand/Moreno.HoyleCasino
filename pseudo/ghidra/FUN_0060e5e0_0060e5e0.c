// FUN_0060e5e0  0060e5e0

void FUN_0060e5e0(HWND param_1,uint param_2,HDROP param_3,LONG *param_4)

{
  short sVar1;
  char cVar2;
  LPCSTR lpCaption;
  LPCSTR lpText;
  int iVar3;
  short sVar4;
  uint uVar5;
  UINT uType;
  WINDOWPLACEMENT local_1b4;
  LONG LStack_188;
  LONG LStack_184;
  LONG LStack_180;
  LONG LStack_17c;
  LRESULT LStack_178;
  CHAR local_174 [264];
  int local_6c;
  int *local_68;
  LONG *local_64;
  FILE *local_60;
  UINT local_5c;
  UINT local_58;
  tagPAINTSTRUCT tStack_54;
  uint local_14;
  LONG *local_10;
  tagPOINT local_c;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_68 = (int *)GetWindowLongA(param_1,0);
  if ((param_2 != 1) && (local_68 == (int *)0x0)) {
    DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
    goto LAB_0060f23d;
  }
  if (param_2 < 0x101) {
    if (param_2 == 0x100) {
      if (((param_3 < (HDROP)0x1c) || (((HDROP)0x28 < param_3 && (param_3 != (HDROP)0x2e)))) ||
         (param_3 == (HDROP)0x20)) {
        FUN_00630a90(local_68,(uint)param_3 & 0xff,1,0);
      }
      else {
        FUN_00630a90(local_68,(uint)param_3 & 0xff,0,0);
        FUN_00630a90(local_68,(uint)param_3 & 0xff,1,0);
      }
      goto LAB_0060f23d;
    }
    switch(param_2) {
    case 1:
      SetWindowLongA(param_1,0,*param_4);
      local_68 = (int *)GetWindowLongA(param_1,0);
      local_68[0x23] = (int)param_1;
      break;
    default:
      goto LAB_0060f223;
    case 3:
      if (local_68 != (int *)0x0) {
        (**(code **)(*local_68 + 0x40))();
      }
      DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      break;
    case 5:
      if (param_3 == (HDROP)0x0) {
        if (((local_68 != (int *)0x0) && (cVar2 = FUN_00614010(), cVar2 != '\0')) &&
           ((char)local_68[0x25] != '\0')) {
          FUN_00607930("MaximizeWindow",0);
        }
      }
      else if (((param_3 == (HDROP)0x2) && (local_68 != (int *)0x0)) &&
              ((cVar2 = FUN_00614010(), cVar2 != '\0' && ((char)local_68[0x25] != '\0')))) {
        FUN_00607930("MaximizeWindow",1);
      }
      if (local_68 != (int *)0x0) {
        (**(code **)(*local_68 + 0x40))();
      }
      DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      break;
    case 6:
      uVar5 = (uint)param_3 & 0xffff;
      if (uVar5 == 0) {
        if (*(int *)(DAT_007960d8 + 8) != 0) {
          FUN_00608290();
          FUN_0060a6a0();
        }
      }
      else {
        if (uVar5 != 1) {
          if (uVar5 != 2) goto LAB_0060ef1b;
          if (*(char *)((int)local_68 + 0x59) == '\0') {
            DAT_015e55e2 = '\x01';
          }
        }
        if (DAT_015e55d0 != '\0') {
          DAT_015e55d0 = '\0';
          (**(code **)(*local_68 + 0x20))();
        }
        if (*(int *)(DAT_007960d8 + 8) != 0) {
          FUN_00608270();
          FUN_0060a800();
        }
      }
LAB_0060ef1b:
      DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      break;
    case 7:
      DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      break;
    case 8:
      DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      break;
    case 0xf:
      BeginPaint(param_1,&tStack_54);
      OffsetRect(&tStack_54.rcPaint,-local_68[10],-local_68[0xb]);
      LStack_188 = tStack_54.rcPaint.left;
      LStack_184 = tStack_54.rcPaint.top;
      LStack_180 = tStack_54.rcPaint.right;
      LStack_17c = tStack_54.rcPaint.bottom;
      EndPaint(param_1,&tStack_54);
      FUN_00613e30(&LStack_188);
      break;
    case 0x10:
    case 0x12:
      FUN_00630030();
      break;
    case 0x14:
      FUN_0060d6a0();
      break;
    case 0x1c:
      if (param_3 != (HDROP)0x0) {
        FUN_00613d20();
        FUN_00613e70();
        DAT_015e55d3 = '\x01';
      }
      DAT_015e55d5 = param_3 == (HDROP)0x0;
      DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      break;
    case 0x7e:
      if ((char)local_68[0x16] != '\0') {
        DAT_007950b5 = param_3._0_1_;
        FUN_00613d20();
        FUN_00613e70();
      }
      DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      break;
    case 0x84:
      LStack_178 = DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      if ((((LStack_178 == 1) || (cVar2 = FUN_00631420(), cVar2 == '\0')) && (LStack_178 == 2)) &&
         (cVar2 = (**(code **)(*local_68 + 0x30))(), cVar2 == '\0')) {
        GetSystemMetrics(1);
        FUN_00613620();
      }
    }
    goto LAB_0060f23d;
  }
  sVar1 = (short)param_4;
  sVar4 = (short)((uint)param_4 >> 0x10);
  if (param_2 < 0x201) {
    if (param_2 == 0x200) {
      if ((DAT_015e55d1 == '\0') &&
         ((*(char *)((int)local_68 + 0x59) != '\0' || (DAT_015e55d3 != '\0')))) {
        DAT_015e55d1 = '\x01';
        local_c.x = (int)sVar1 - local_68[10];
        local_c.y = (int)sVar4 - local_68[0xb];
        FUN_00630400(local_c.x,local_c.y);
        DAT_015e55d1 = '\0';
      }
      goto LAB_0060f23d;
    }
    switch(param_2) {
    case 0x101:
      FUN_00630950(local_68,(uint)param_3 & 0xff,0,1);
      break;
    case 0x102:
      if (((((uint)param_4 & 0x1000000) == 0) && (param_3 != (HDROP)0x8)) || (param_3 == (HDROP)0xd)
         ) {
        FUN_00630950(local_68,CONCAT31((int3)(((uint)param_4 & 0x1000000) >> 8),param_3._0_1_),0,0);
      }
      else {
        FUN_00630a90(local_68,CONCAT31((int3)(param_2 - 0x101 >> 8),param_3._0_1_),0,0);
      }
      break;
    default:
      goto LAB_0060f223;
    case 0x104:
      if ((((param_3 == (HDROP)0xd) && (local_68 != (int *)0x0)) &&
          (cVar2 = FUN_00630c90(), cVar2 != '\0')) &&
         (cVar2 = (**(code **)(*local_68 + 0x2c))(), cVar2 != '\0')) {
        FUN_005f2d10(0xffffff9c);
      }
      else {
        DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      }
      break;
    case 0x111:
      FUN_005f2d10(param_3);
      break;
    case 0x112:
      if ((param_3 != (HDROP)0xf100) || (cVar2 = FUN_00631420(), cVar2 == '\0')) {
        DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      }
    }
    goto LAB_0060f23d;
  }
  if (param_2 < 0x20b) {
    if (param_2 == 0x20a) {
      if ((DAT_015e55d1 == '\0') &&
         ((*(char *)((int)local_68 + 0x59) != '\0' || (DAT_015e55d3 != '\0')))) {
        local_c.x = (int)sVar1 - local_68[10];
        local_c.y = (int)sVar4 - local_68[0xb];
        ScreenToClient(param_1,&local_c);
        FUN_00630830(local_68,local_c.x,local_c.y,(int)(short)((uint)param_3 >> 0x10));
      }
      goto LAB_0060f23d;
    }
    switch(param_2) {
    case 0x201:
      if (DAT_015e55e2 == '\0') {
        SetCapture(param_1);
        DAT_015e55e1 = '\x01';
        local_c.x = (int)sVar1 - local_68[10];
        local_c.y = (int)sVar4 - local_68[0xb];
        FUN_00630550(local_68,local_c.x,local_c.y,0,1);
      }
      else {
        DAT_015e55e2 = '\0';
        SendMessageA(param_1,0x200,(WPARAM)param_3,(LPARAM)param_4);
      }
      break;
    case 0x202:
      if (DAT_015e55e0 == '\0') {
        ReleaseCapture();
      }
      DAT_015e55e1 = '\0';
      local_c.x = (int)sVar1 - local_68[10];
      local_c.y = (int)sVar4 - local_68[0xb];
      FUN_00630550(local_68,local_c.x,local_c.y,0,0);
      break;
    default:
      goto LAB_0060f223;
    case 0x204:
      if (DAT_015e55e2 == '\0') {
        SetCapture(param_1);
        DAT_015e55e0 = '\x01';
        local_c.x = (int)sVar1 - local_68[10];
        local_c.y = (int)sVar4 - local_68[0xb];
        FUN_00630550(local_68,local_c.x,local_c.y,1,1);
      }
      else {
        DAT_015e55e2 = '\0';
        SendMessageA(param_1,0x200,(WPARAM)param_3,(LPARAM)param_4);
      }
      break;
    case 0x205:
      if (DAT_015e55e1 == '\0') {
        ReleaseCapture();
      }
      DAT_015e55e0 = '\0';
      local_c.x = (int)sVar1 - local_68[10];
      local_c.y = (int)sVar4 - local_68[0xb];
      FUN_00630550(local_68,local_c.x,local_c.y,1,0);
    }
  }
  else {
    if (param_2 < 0x21a) {
      if (param_2 == 0x219) {
        if (*(char *)((int)local_68 + 0x5a) != '\0') {
          if (param_3 == (HDROP)0x8001) {
            local_10 = param_4;
            if (param_4[1] == 2) {
              local_64 = param_4;
              local_6c = param_4[3];
              if ((DAT_00795f6c != '\0') && (local_6c == 1 << (DAT_00795f6c + 0x9fU & 0x1f))) {
                if (*(int *)(DAT_007960d8 + 8) != 0) {
                  FUN_0060a4d0();
                }
                if (*(char *)((int)local_68 + 0x5b) != '\0') {
                    /* WARNING: Subroutine does not return */
                  _exit(-1);
                }
              }
            }
          }
          else if ((param_3 == (HDROP)0x8004) && (local_10 = param_4, param_4[1] == 2)) {
            local_64 = param_4;
            local_6c = param_4[3];
            while ((DAT_00795f6c != '\0' && (local_6c == 1 << (DAT_00795f6c + 0x9fU & 0x1f)))) {
              if (*(int *)(DAT_007960d8 + 8) != 0) {
                FUN_0060a4d0();
              }
              local_1b4.length = 0x2c;
              local_1b4.showCmd = 2;
              GetWindowPlacement(param_1,&local_1b4);
              if (local_1b4.showCmd == 2) {
                ShowWindow(param_1,9);
              }
              SetForegroundWindow(param_1);
              (**(code **)(*local_68 + 0x24))(0);
              if (*(char *)((int)local_68 + 0x5b) != '\0') {
LAB_0060f0c1:
                    /* WARNING: Subroutine does not return */
                exit(-1);
              }
              uType = 0x2004;
              lpCaption = (LPCSTR)FUN_00630d20();
              lpText = (LPCSTR)FUN_00630ce0();
              iVar3 = MessageBoxA((HWND)0x0,lpText,lpCaption,uType);
              if (iVar3 == 6) goto LAB_0060f0c1;
              Sleep(5000);
              wsprintfA(local_174,"%c:\\%s",(int)DAT_00795f6c,&DAT_00795940);
              local_60 = (FILE *)FUN_005ea9c0(local_174,&DAT_006c2d28);
              if (local_60 != (FILE *)0x0) {
                fclose(local_60);
                local_6c = 0;
              }
            }
            FUN_006300f0();
          }
        }
        goto LAB_0060f23d;
      }
      if ((param_2 == 0x211) || (param_2 == 0x212)) goto LAB_0060f23d;
    }
    else {
      if (param_2 == 0x233) {
        local_58 = DragQueryFileA(param_3,0xffffffff,(LPSTR)0x0,0);
        for (local_5c = 0; (int)local_5c < (int)local_58; local_5c = local_5c + 1) {
          DragQueryFileA(param_3,local_5c,local_174,0x104);
          FUN_006300d0(local_174);
        }
        DragFinish(param_3);
        goto LAB_0060f23d;
      }
      if (param_2 == 0x311) {
        if (param_3 != (HDROP)param_1) {
          FUN_00613d20();
          FUN_00613e70();
        }
        DefWindowProcA(param_1,0x311,(WPARAM)param_3,(LPARAM)param_4);
        goto LAB_0060f23d;
      }
    }
LAB_0060f223:
    DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
  }
LAB_0060f23d:
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

