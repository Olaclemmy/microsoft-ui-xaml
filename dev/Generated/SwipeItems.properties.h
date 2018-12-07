// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class SwipeItemsProperties
{
public:
    SwipeItemsProperties();

    void Mode(winrt::SwipeMode const& value);
    winrt::SwipeMode Mode();

    static winrt::DependencyProperty ModeProperty() { return s_ModeProperty; }

    static GlobalDependencyProperty s_ModeProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};