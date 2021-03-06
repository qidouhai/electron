// Copyright (c) 2016 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#ifndef SHELL_BROWSER_UI_VIEWS_MENU_MODEL_ADAPTER_H_
#define SHELL_BROWSER_UI_VIEWS_MENU_MODEL_ADAPTER_H_

#include "shell/browser/ui/atom_menu_model.h"
#include "ui/views/controls/menu/menu_model_adapter.h"

namespace electron {

class MenuModelAdapter : public views::MenuModelAdapter {
 public:
  explicit MenuModelAdapter(AtomMenuModel* menu_model);
  ~MenuModelAdapter() override;

 protected:
  bool GetAccelerator(int id, ui::Accelerator* accelerator) const override;

 private:
  AtomMenuModel* menu_model_;

  DISALLOW_COPY_AND_ASSIGN(MenuModelAdapter);
};

}  // namespace electron

#endif  // SHELL_BROWSER_UI_VIEWS_MENU_MODEL_ADAPTER_H_
