/*
 * Copyright (C) 2018-2020 University of Waterloo.
 *
 * This file is part of Perses.
 *
 * Perses is free software; you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 3, or (at your option) any later version.
 *
 * Perses is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * Perses; see the file LICENSE.  If not see <http://www.gnu.org/licenses/>.
 */
package org.perses.antlr.ast;

public abstract class AbstractPersesTerminalAst extends AbstractPersesRuleElement {

  protected final String text;

  protected AbstractPersesTerminalAst(String text) {
    this.text = text;
  }

  public final String getText() {
    return text;
  }

  @Override
  public final int getChildCount() {
    return 0;
  }

  @Deprecated
  @Override
  public final AbstractPersesRuleElement getChild(int index) {
    throw new UnsupportedOperationException();
  }
}
